#!/bin/sh

set +e

mount_mmc=0

# 941 is red led
echo 941 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio941/direction
echo 1 > /sys/class/gpio/gpio941/value
# 942 is green led
echo 942 > /sys/class/gpio/export
echo high > /sys/class/gpio/gpio942/direction
echo 1 > /sys/class/gpio/gpio942/value
sleep 1
echo 0 > /sys/class/gpio/gpio941/value
echo 0 > /sys/class/gpio/gpio942/value

pg_success()
{
	while ((1))
	do
	echo 1 > /sys/class/gpio/gpio941/value
	echo 1 > /sys/class/gpio/gpio942/value
	sleep 1
	echo 0 > /sys/class/gpio/gpio941/value
	echo 0 > /sys/class/gpio/gpio942/value
	sleep 1
	done
} 
pg_fail()
{
	while ((1))
	do
	echo 1 > /sys/class/gpio/gpio941/value
	sleep 1
	echo 0 > /sys/class/gpio/gpio941/value
	sleep 1
	done
} 
echo " "
echo "--- SD recover NAND begin ---"

echo " "
echo "--- mkdir /mnt/tmp ---"
mkdir /mnt/tmp

echo " "
echo "--- mount /dev/mmcblk0 /mnt/tmp ---"
mount -t vfat /dev/mmcblk0 /mnt/tmp
if [ ! -e /mnt/tmp/uImage ]; then
	mount -t vfat /dev/mmcblk0p1 /mnt/tmp
	mount_mmc=1
	echo "--- mount /dev/mmcblk0p1 /mnt/tmp ---"
fi

cd /mnt/tmp/bin

if [ -e BOOT.bin ]; then
	echo " "
	echo "--- erase BOOT.bin 1 ---"
	flash_erase /dev/mtd0 0x0 0x40
	
	echo " "
	echo "--- write BOOT.bin 1 ---"
	nandwrite -p -s 0x0 /dev/mtd0 /mnt/tmp/bin/BOOT.bin
fi

if [ -e BOOT.bin ]; then
	echo " "
	echo "--- erase BOOT.bin 2 ---"
	flash_erase /dev/mtd0 0x800000 0x40

	echo " "
	echo "--- write BOOT.bin 2 ---"
	nandwrite -p -s 0x800000 /dev/mtd0 /mnt/tmp/bin/BOOT.bin
fi

if [ -e BOOT.bin ]; then
	echo " "
	echo "--- erase BOOT.bin 3 ---"
	flash_erase /dev/mtd0 0x1000000 0x40

	echo " "
	echo "--- write BOOT.bin 3 ---"
	nandwrite -p -s 0x1000000 /dev/mtd0 /mnt/tmp/bin/BOOT.bin
fi

if [ -e devicetree.dtb ]; then
	echo " "
	echo "--- erase device tree ---"
	flash_erase /dev/mtd0 0x1A00000 0x1
	
	echo " "
	echo "--- write device tree ---"
	nandwrite -p -s 0x1A00000 /dev/mtd0 /mnt/tmp/bin/devicetree.dtb
fi

if [ -e uImage ]; then
	echo " "
	echo "--- erase kernel ---"
	flash_erase /dev/mtd0 0x2000000 0x40
	
	echo " "
	echo "--- write kernel ---"
	nandwrite -p -s 0x2000000 /dev/mtd0 /mnt/tmp/bin/uImage
fi

if [ -e uramdisk.image.gz ]; then
	echo " "
	echo "--- erase ramfs ---"
	flash_erase /dev/mtd1 0x0 0x100
	
	echo " "
	echo "--- write ramfs ---"
	nandwrite -p -s 0x0 /dev/mtd1 /mnt/tmp/bin/uramdisk.image.gz


	echo " "
	echo "--- erase ramfs-bak ---"
	flash_erase /dev/mtd4 0x0 0x100

	echo " "
	echo "--- write ramfs-bak ---"
	nandwrite -p -s 0x0 /dev/mtd4 /mnt/tmp/bin/uramdisk.image.gz
fi

if [ -e passwd.txt ] || [ -e cgminer.conf ] || [ -e bmminer.conf ];then	
	#mount config
	mkdir /config
	mount -t jffs2 /dev/mtdblock2 /config
	if [ $? -eq 0 ];then
		echo "jffs2 config"
		isjffs2=1
	else
		echo "not jffs2 config, using ubi"
		ubi.sh 2 1 configs  0 /config
		isjffs2=0
	fi 
	#backup mac
	cp /config/mac /tmp/ -f
	#backup conf
	cp /config/*.conf /tmp/ -f
	#erase config
	umount /config
	flash_erase /dev/mtd2 0x0 0x40	
	#recover mac
	if [ $isjffs2 -eq 1 ];then
		mount -t jffs2 /dev/mtdblock2 /config
	else
		echo "using ubiattach"
		ubidetach /dev/ubi_ctrl -m 2
		ubi.sh 2 1 configs  0 /config
	fi
	new_pw=`cat passwd.txt`
	if [ -n $new_pw ];then
		if [ ! -f /etc/shadow ];then
			touch /etc/shadow
		fi
		printf "$new_pw\n$new_pw" | passwd root > /dev/null
		mv /etc/shadow /config/shadow
		hash=`echo -n "root:antMiner Configuration:$new_pw" | md5sum | cut -b -32`
		echo "root:antMiner Configuration:$hash" > /config/lighttpd-htdigest.user
	else
		echo "null password"
	fi
	if [ -e cgminer.conf ];then
		cp cgminer.conf /config/cgminer.conf -f
	else
		cp /tmp/cgminer.conf /config/cgminer.conf -f
	fi
	if [ -e bmminer.conf ];then
		cp bmminer.conf /config/bmminer.conf -f
	else
		cp /tmp/bmminer.conf /config/bmminer.conf -f
	fi
	cp /tmp/mac /config/ -f
	#rm tmp
	rm -f /tmp/mac
	rm -f /tmp/*.conf
	#umount config
	umount /config
	sync
fi
sleep 3
cd /mnt
if [ $mount_mmc -eq 0 ]; then
	umount /dev/mmcblk0
	echo "--- umount /dev/mmcblk0 ---"
else
	umount /dev/mmcblk0p1
	echo "--- umount /dev/mmcblk0p1 ---"
fi
#rm -r /mnt/tmp

echo " "
echo "--- SD recover NAND done! ---"
echo " "
echo " "

pg_success


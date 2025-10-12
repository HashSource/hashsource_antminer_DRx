#set -x
file=/tmp/$$

if [ -e /etc/ant_version ]; then
	if [ ! -f version ]; then
		echo "RUNME: ERR FW!!!" >> /tmp/upgrade_result
		rm * -rf > /dev/null 2>&1
 		cd ..
 		rmdir /tmp/mem/fw
 		umount -l /tmp/mem > /dev/null 2>&1
 		rmdir /tmp/mem/
		exit 1
	fi
	nVer=`cat version`
	oVer=`cat /etc/ant_version`

	if [ ${nVer} -lt ${oVer} ]; then
		echo "RUNME: Cannot Downgrade!!!" >> /tmp/upgrade_result
		rm * -rf > /dev/null 2>&1
 		cd ..
 		rmdir /tmp/mem/fw
 		umount -l /tmp/mem > /dev/null 2>&1
 		rmdir /tmp/mem/
		exit 2
	fi
fi

if [ -e BOOT.bin ]; then
	flash_erase /dev/mtd0 0x0 0x40 >/dev/null 2>&1
	nandwrite -p -s 0x0 /dev/mtd0 BOOT.bin >/dev/null 2>&1
fi

if [ -e devicetree.dtb ]; then
	flash_erase /dev/mtd0 0x1A00000 0x1 >/dev/null 2>&1
	nandwrite -p -s 0x1A00000 /dev/mtd0 devicetree.dtb >/dev/null 2>&1
fi

if [ -e uImage ]; then
	flash_erase /dev/mtd0 0x2000000 0x40 >/dev/null 2>&1
	nandwrite -p -s 0x2000000 /dev/mtd0 uImage >/dev/null 2>&1
fi

if [ -e uramdisk.image.gz ]; then
    md5=`md5sum uramdisk.image.gz | awk {'print $1'}`
    md5_r=`cat md5_info`
    if [ $md5 == $md5_r ];then
		flash_erase /dev/mtd1 0x0 0x100 >/dev/null 2>&1
		nandwrite -p -s 0x0 /dev/mtd1 uramdisk.image.gz >/dev/null 2>&1
		if [ -e /dev/mtd4 ]; then
			flash_erase /dev/mtd4 0x0 0x100 >/dev/null 2>&1
			nandwrite -p -s 0x0 /dev/mtd4 uramdisk.image.gz >/dev/null 2>&1
		fi
	else
		echo $md5 > /config/md5_error
		echo $md5_r >> /config/md5_error
		echo "Error md5! $md5 $md5_r" >> /tmp/upgrade_result
	fi
fi

rm -rf /config/scanfreqdone 2>/dev/null

sync >/dev/null 2>&1

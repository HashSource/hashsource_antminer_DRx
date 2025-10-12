#!/bin/sh
for urlsite in "antpool.com" "btc.com" "f2pool.com" "viabtc.com" "braiins.com" "baidu.com" "google.com" "bing.com"
do
urldate=`echo -e "HEAD / HTTP/1.1\r\nHOST:${urlsite}\r\nConnection:close\r\n\r\n" | nc -w 3 ${urlsite} 80 | grep "Date:"`
if [ "$urldate" = "" ];then
    sleep 1
    echo "urldate is empty"
    continue
else
    urldate=`echo ${urldate#*,}`
    #below -D is very important.busybox shell is not bash shell,busybox date is not normal shell date.
    settime=`date +"%Y-%m-%d %H:%M:%S" -D "$urldate"`
    date -s "$settime"
    if [ $? -eq 0 ];then
        exit 0
    else
        break
    fi
fi
done

exit 1

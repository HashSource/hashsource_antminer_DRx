#!/bin/sh

echo "Flash log:"
if [ -f  /config/flash_log ];then
    cat /config/flash_log
fi

echo
echo
if [ -f /etc/subtype ]
then
    subtype=`cat /etc/subtype`
else
    subtype="unknown"
fi

miner_type=`cat /usr/bin/compile_time  | sed -n '2p'`

fw_version=`cat /usr/bin/compile_time  | sed -n '1p'`

echo "{\"miner_type\": \"$miner_type\", \"subtype\": \"$subtype\", \"fw_version\": \"$fw_version\"}"

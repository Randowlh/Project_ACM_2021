#ping 同一网段下所有ip 100ms 超时
# 如果响应 打印ip

for i in {1..254}
do
    echo "ping 192.168.5.$i"
    ip=192.168.5.$i
    ping -c 1 -W 0.1 $ip &>/dev/null
    if [ $? -eq 0 ];then
        echo $ip
    fi
done
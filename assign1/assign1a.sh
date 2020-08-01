clear
echo "This machine is $(hostname)."
echo "$(lastlog | grep 'Never' -v -c) users have logged in to $(hostname) since $(last | tail -n 1 | awk '{print $3 " " $4 " " $5}'); they are:"
echo "$(lastlog | grep 'Never' -v | grep 'Username' -v | awk '{printf $1 ", "}')"
echo "$(hostname) is at $(curl https://ipinfo.io/ip -s) and is running" $(. /etc/os-release; echo $PRETTY_NAME)
echo "You are $LOGNAME, and you have logged in $(last | grep $LOGNAME -c) times since $(last | tail -n 1 | awk '{print $3 " " $4 " " $5}')"


# lastlog | grep "Never" -v | awk '{print $1;}'

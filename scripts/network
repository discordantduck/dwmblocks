#! /bin/bash

echo -e "$(nmcli -t -f IN-USE,SSID,BARS device wifi | awk -F: '/^\*/ {print $2 " " $3}')"

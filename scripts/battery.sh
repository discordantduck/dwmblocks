BATTERY="/sys/class/power_supply/BAT0/"
capacity="$(cat "$BATTERY"/capacity)"
status="$(cat "$BATTERY"/status)"

if [ $status = "Discharging" ]; then
    echo $capacity%
else
    echo "-"
fi

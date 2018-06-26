ldapsearch -Q sn="*bon*" | grep sn | sed 1d | wc -l | tr -d ' '

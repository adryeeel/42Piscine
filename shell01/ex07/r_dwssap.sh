cat /etc/passwd | awk -F: '{print $1}' | awk 'NR % 2 == 0' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | awk -F'\n' -v ORS=", " '{print $0}' | sed 's/,[[:space:]]$/./'

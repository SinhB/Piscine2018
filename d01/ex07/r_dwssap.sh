#!/bin/sh

cat /etc/passwd | grep -o '^[^#]*' | cut -d ':' -f1 |sed -e '1!n;d' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,$/./'
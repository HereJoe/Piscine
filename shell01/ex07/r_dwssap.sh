#!/bin/bash

cat /etc/passwd |grep -v '^#' |awk 'NR%2==0' |cut -d ':' -f 1 |rev |sort -r |awk -v l="${FT_LINE1}" -v r="${FT_LINE2}" 'NR>=l && NR<=r {printf $1 ", "}' |sed 's/, $/./' |tr -d '\n'

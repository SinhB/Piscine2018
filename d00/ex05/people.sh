#!/bin/sh

ldapsearch -LLL "(uid=z*)" | grep "^cn" | sort -rf | cut -c 5-
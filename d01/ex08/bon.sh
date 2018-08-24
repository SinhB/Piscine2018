#!/bin/sh

ldapsearch -QLLL "sn=*bon*" | grep "^sn:" | wc -l | sed 's/^[ \t]*//'
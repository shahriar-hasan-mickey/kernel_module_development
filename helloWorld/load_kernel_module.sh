#!/bin/bash

sudo insmod $1
length=${#1}
((length=length-3))
module_name=${1:0:${length}}
echo "OUTPUT OF lmod:"
lsmod | grep $module_name
echo "LAST 10 KERNEL MESSAGE"
sudo dmesg | tail

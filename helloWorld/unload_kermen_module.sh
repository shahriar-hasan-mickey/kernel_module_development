#!/bin/bash

sudo rmmod ${1}
echo "LAST 10 KERNEL MESSAGE"
sudo dmesg | tail

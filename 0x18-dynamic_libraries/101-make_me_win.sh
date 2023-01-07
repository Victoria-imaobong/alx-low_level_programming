#!/bin/bash
wget -p /tmp https://github.com/nigel2421/alx-low_level_programming/raw/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so

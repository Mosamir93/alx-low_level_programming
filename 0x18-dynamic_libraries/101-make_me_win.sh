#!/bin/bash
wget -P /tmp https://github.com/Mosamir93/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libg.so
export LD_PRELOAD=/tmp/libg.so

#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Mosamir93/alx-low_level_programming/master/0x18-dynamic_libraries/libg.so
export LD_PRELOAD="$PWD/../libg.so"

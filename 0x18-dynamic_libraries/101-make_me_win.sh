#!/bin/bash
wget -P /tmp https://github.com/Mosamir93/alx-low_level_programming/tree/d659b1ef0d10cfd4227d5956f70f40195c057d58/0x18-dynamic_libraries/libg.so
export LD_PRELOAD=/tmp/libg.so

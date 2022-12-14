#!/bin/bash
wget -P /tmp/ https://github.com/Stickyemey1/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so

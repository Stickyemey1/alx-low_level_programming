#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
export LD_LIBRARY_PATH.:$PLD_LIBRARY_PATH

#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *.o
ranlib lilall.a

#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar _rc liball.a *.o
ranlib liball.a
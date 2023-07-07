#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libll.a *.o
ranlib liball.a

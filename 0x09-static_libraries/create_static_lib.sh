#!/bin/bash

# compile
gcc -Wall -pedantic -Werror -Wextra -c *.c

# create lib
ar -cr liball.a *.o

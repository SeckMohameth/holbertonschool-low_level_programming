#!/bin/bash
gcc -fPIC -c *.c
ar rc liball.so *.o

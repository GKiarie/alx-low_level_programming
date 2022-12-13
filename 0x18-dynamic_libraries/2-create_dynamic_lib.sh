#!/bin/bash
gcc -c add.c sub.c mul.c div.c mod.c -fpic
gcc add.o sub.o mul.o div.o mod.o -shared -o 100-operations.so

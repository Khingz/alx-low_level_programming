#!/bin/bash
gcc -fPIC -c inject.c -o inj.o
gcc -shared -o libinj.so inj.o

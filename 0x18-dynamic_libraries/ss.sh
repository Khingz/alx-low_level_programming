#!/bin/bash
gcc -fPIC -c inject.c
gcc -shared -o libinject.so *inject.o

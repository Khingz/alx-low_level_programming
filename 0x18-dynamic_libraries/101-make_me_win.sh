#!/bin/bash
export LD_PRELOAD=$PWD/libinj.so
./gm 9 8 10 24 75 9

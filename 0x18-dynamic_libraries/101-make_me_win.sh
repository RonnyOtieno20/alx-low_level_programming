#!/bin/bash
gcc -shared -o 101-gm_override.so -fPIC 101-gm_override.c
export LD_PRELOAD="$PWD/101-gm_override.so"
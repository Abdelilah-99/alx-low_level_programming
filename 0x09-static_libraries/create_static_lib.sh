#!/bin/bash

C_FILES=$(find . -maxdepth 1 -type f -name "*.c")

ar rcs liball.a $(for file in $C_FILES; do gcc -c $file; echo ${file%.c}.o; done)

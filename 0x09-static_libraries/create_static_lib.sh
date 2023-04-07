#!/bin/bash

file_pjt=$(find . -maxdepth 1 type -f -name "*.c")
ar rcs liball.a $(for file in $file_pjt; do gcc -c $file; echo ${file%.c}.o; done)

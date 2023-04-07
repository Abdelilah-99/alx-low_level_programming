#!/bin/bash
#in this line were lik saying put what we got in command and its to find all file in the current directory by find . but this mean also the subdirectory
#so we add -maxdepth 1 to search only in the first level o the directory then we mention the of what we wand by adding f a that mean just file 
#and the we need all file that end with a .c
C_FILES=$(find . -maxdepth 1 -type f -name "*.c")
#here we play with all fil that we collect from C_FILES and we did a command that convert compile file to an object file or to machi code file the we list
#all this fils without .c and that what % do then we add .o for link it with archiv
ar rcs liball.a $(for file in $C_FILES; do gcc -c $file; echo ${file%.c}.o; done)

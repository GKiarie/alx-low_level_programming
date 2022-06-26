1. script that runs through the preprocessor and saves the result into another file: gcc -E main.c -o c
2. script that compiles a C file but does not link; the C filename will be save in the variable $CFILE (export CFILE=main.c);teh ouput file shoild be named as the C file but with extension .o: gcc -c $CFILE

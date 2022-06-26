1. script that runs through the preprocessor and saves the result into another file: gcc -E main.c -o c
2. script that compiles a C file but does not link; the C filename will be save in the variable $CFILE (export CFILE=main.c);teh ouput file shoild be named as the C file but with extension .o: gcc -c $CFILE
3. script that generates the assembly code of a C code and save it in an output file; C file will be saved in the variable $CFILE (export CFILE=main.c); output file should be named the same as the C file, but with the extension .s instead of .c: gcc -S $CFILE
4. script that compiles a C file and creates an executable named cisfun: gcc $CFILE -o cisfun

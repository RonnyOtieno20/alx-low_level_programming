# A script that creates a dynamic library called liball.so from all the
# .c files that are in the current directory.

#!/usr/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

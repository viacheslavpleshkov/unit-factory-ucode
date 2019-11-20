all: install clean
install:
        cp src/*.c .
        cp inc/*.h .
        clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c *.c
uninstall:
        rm minilibmx.a
clean:
        rm -rf *.h
        rm -rf *.c
        rm -rf *.o
reinstall: uninstall all

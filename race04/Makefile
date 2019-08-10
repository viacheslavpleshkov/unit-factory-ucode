NAME = race04

SRCS = src/mx_strlen.c src/mx_printchar.c src/mx_printint.c src/mx_isdigit.c src/mx_isspace.c src/mx_strcmp.c src/mx_printstr.c src/mx_strdel.c src/mx_strncpy.c src/mx_strnew.c src/mx_strtrim.c src/mx_printerr.c src/mx_atoi.c src/mx_matrix_max.c src/file_to_str.c src/int_matrix.c src/mx_algorith_lee.c src/main.c
SRCSOB = mx_strlen.c mx_printchar.c mx_printint.c mx_isdigit.c mx_isspace.c mx_strcmp.c mx_printstr.c mx_strdel.c mx_strncpy.c mx_strnew.c mx_strtrim.c mx_printerr.c mx_atoi.c mx_matrix_max.c file_to_str.c int_matrix.c mx_algorith_lee.c main.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)
reinstall: uninstall clean all
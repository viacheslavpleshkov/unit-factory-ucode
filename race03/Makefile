NAME = race03

SRCS = src/mx_atoi.c src/to_int.c src/to_char.c src/mx_insertion_sort.c src/mx_isdigit.c src/is_duplicate.c src/mx_isspace.c src/mx_printstr.c src/mx_strcmp.c src/mx_strdel.c src/mx_strncpy.c src/mx_strnew.c src/mx_strtrim.c src/mx_printerr.c src/is_valid.c src/is_flesh.c src/is_kare.c src/is_pairs.c src/is_set.c src/is_street.c src/is_rank.c src/is_suit.c src/mx_strlen.c src/sort.c src/result.c src/main.c
SRCSOB = mx_atoi.c to_int.c to_char.c mx_insertion_sort.c mx_isdigit.c is_duplicate.c mx_isspace.c mx_printstr.c mx_strcmp.c mx_strdel.c mx_strncpy.c mx_strnew.c mx_strtrim.c mx_printerr.c is_valid.c is_flesh.c is_kare.c is_pairs.c is_set.c is_street.c is_rank.c is_suit.c mx_strlen.c sort.c result.c main.c

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

NAME = mx_cat

SRCS = src/mx_strlen.c src/mx_printerr.c src/main.c
SRCSOB = mx_strlen.c mx_printerr.c main.c 

INC = inc/cat.h
INCOB = cat.h

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

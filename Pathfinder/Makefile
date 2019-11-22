NAME = pathfinder

INC = pathfinder.h
CC = clang

CFLGS = -std=c11 -Wall -Wextra -Wpedantic -Werror 

SRC = main.c 
	
OBJ_DIR = ./obj/
SRC_DIR = ./src/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

all: install clean

install:
	@cd libmx && make -f Makefile install
	@cp $(INC) $(SRCS) .
	@clang $(CFLGS) -c  $(SRC)
	@mkdir  obj
	@mv $(OBJ) ./obj
	@clang $(CFLGS) $(OBJO) libmx/libmx.a -o $(NAME)

uninstall:
	@cd libmx && make -f Makefile uninstall
	@rm -rf $(OBJO) $(SRC) $(HEADTMP)
	@rm -rf ./obj

clean: uninstall
	@cd libmx && make -f Makefile clean
	@rm -rf $(NAME)

reinstall: clean all
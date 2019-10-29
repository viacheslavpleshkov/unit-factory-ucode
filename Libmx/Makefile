NAME = libmx.a
CC = clang

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
LFLAGS = -Iinc

SRC = mx_printchar.c 

OBJ_DIR = ./obj/
SRC_DIR = ./src/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(LFLAGS) -o $@ -c $<

all: install clean

install: $(OBJ)
	@mkdir -p $(OBJ_DIR)
	@ar rc $(NAME) $(OBJ)
clean:
	@rm -rf $(OBJ_DIR)
uninstall: clean
	@rm -f $(NAME)
reinstall: uninstall all
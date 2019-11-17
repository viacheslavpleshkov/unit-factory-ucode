NAME = libmx.a
CC = clang

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
LFLAGS = -Iinc

SRC = mx_printchar.c mx_strlen.c mx_print_unicode.c mx_printstr.c mx_print_strarr.c \
		mx_printint.c mx_pow.c mx_sqrt.c mx_nbr_to_hex.c mx_hex_to_nbr.c mx_itoa.c \
		mx_foreach.c mx_binary_search.c mx_strcmp.c mx_bubble_sort.c mx_swap_char.c \
		mx_str_reverse.c mx_strdel.c mx_del_strarr.c mx_get_char_index.c mx_strdup.c mx_strndup.c\
		mx_strcpy.c mx_strncpy.c mx_strcmp.c mx_strncmp.c mx_strcat.c mx_strstr.c \
		mx_get_substr_index.c mx_count_substr.c mx_count_words.c mx_strnew.c mx_is_space.c \
		mx_strtrim.c mx_del_extra_spaces.c mx_count_letters.c mx_strsplit.c mx_strjoin.c mx_file_to_str.c \
		mx_replace_substr.c mx_memset.c mx_memcpy.c mx_memccpy.c mx_memcmp.c mx_memchr.c mx_memrchr.c \
		mx_memmem.c mx_memmove.c mx_realloc.c mx_create_node.c mx_push_front.c mx_push_back.c mx_pop_front.c \
		mx_pop_back.c mx_list_size.c mx_sort_list.c

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

c: 
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic main.c libmx.a
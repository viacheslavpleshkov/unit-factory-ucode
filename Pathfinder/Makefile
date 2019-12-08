NAME	=	pathfinder

CFLG	=	-std=c11 -Wall -Wextra -Werror -Wpedantic -g
COMP 	= 	clang

SRCD	=	src
INCD	=	inc
OBJD	=	obj

LMXD	=	libmx
LMXA:=	$(LMXD)/libmx.a
LMXI:=	$(LMXD)/inc

INC		=	pathfinder.h
INCS	=	$(addprefix $(INCD)/, $(INC))

SRC		= 	mx_printerr_pf.c mx_validation_cmd_args.c mx_validation_file_dexist.c mx_validation_first_line.c \
			mx_validation_num_islnd.c mx_validation_check_line.c mx_validation.c createNode.c mx_graph_parse.c \
			mx_graph_create.c mx_graph_add_edge.c mx_graph_print.c mx_graph_algorithm.c mx_file_to_arr.c main.c \
		
SRCS	=	$(addprefix $(SRCD)/, $(SRC))
OBJS	=	$(addprefix $(OBJD)/, $(SRC:%.c=%.o))

all: install
	
install: $(LMXA) $(NAME)

$(NAME): $(OBJS)
	@$(COMP) $(CFLG) $(OBJS) -L$(LMXD) -lmx -o $@
	@printf "\r\33[2K$@\t   \033[32;1mcreated\033[0m\n"

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@$(COMP) $(CFLG) -c $< -o $@ -I$(INCD) -I$(LMXI)
	@printf "\r\33[2K$(NAME)\t   \033[33;1mcompile \033[0m$(<:$(SRCD)/%.c=%) "

$(OBJS): | $(OBJD)

$(OBJD):
	@mkdir -p $@

$(LMXA):
	@make -sC $(LMXD)
clean:
	@make -sC $(LMXD) $@
	@rm -rf $(OBJD)
	@printf "$(OBJD)\t\t   \033[31;1mdeleted\033[0m\n"

uninstall: clean
	@make -sC $(LMXD) $@
	@rm -rf $(NAME)
	@printf "$(NAME)\t   \033[31;1muninstalled\033[0m\n"

reinstall: uninstall install

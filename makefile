NAME_1 = push_swap
NAME_2 = checker

SRC_PATH_1 = ./srcs/

OBJ_PATH_1 = ./objs/

INC_PATH_1 = ./includes/

SRC_PATH_2 = ./srcs/

OBJ_PATH_2 = ./objs/

INC_PATH_2 = ./includes/

SRC_NAME_1 = Push_swap_main.c swap.c push.c rotate.c reverse_rotate.c push_swap.c notify.c is_sort.c error_checker.c \
			push_swap_algos.c

SRC_NAME_2 = checker_main.c swap.c push.c rotate.c reverse_rotate.c checker_instruct.c notify.c is_sort.c error_checker.c

OBJ_NAME_1 = $(SRC_NAME_1:.c=.o)

OBJ_NAME_2 = $(SRC_NAME_2:.c=.o)

SRC_1 = $(addprefix $(SRC_PATH_1)/,$(SRC_NAME_1))

SRC_2 = $(addprefix $(SRC_PATH_2)/,$(SRC_NAME_2))

OBJ_1 = $(addprefix $(OBJ_PATH_1), $(OBJ_NAME_1))

OBJ_2 = $(addprefix $(OBJ_PATH_2), $(OBJ_NAME_2))

LDFLAGS = -L./libft/

LFT = -lft

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror



all: $(NAME_1) $(NAME_2)

$(NAME_1): $(OBJ_1) $(INC_PATH_1)
	@make -C./libft/
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_1) -o $@

$(OBJ_PATH_1)%.o: $(SRC_PATH_1)%.c
	@mkdir $(OBJ_PATH_1) 2> /dev/null || true
	@$(CC) -I$(INC_PATH_1) -o $@ -c $<

$(NAME_2): $(OBJ_2) $(INC_PATH_2)
	@make -C./libft/
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_2) -o $@

$(OBJ_PATH_2)%.o: $(SRC_PATH_2)%.c
	@mkdir $(OBJ_PATH_2) 2> /dev/null || true
	@$(CC) -I$(INC_PATH_2) -o $@ -c $<

clean: cleanlib
	@rm -f $(OBJ_1)
	@rmdir $(OBJ_PATH_1) 2> /dev/null || true
	@rm -f $(OBJ_2)
	@rmdir $(OBJ_PATH_2) 2> /dev/null || true
cleanlib:
	@make clean -C ./libft/

fclean: clean fcleanlib
	@rm -f $(NAME_1)
	@rm -f $(NAME_2)
fcleanlib:
	@make fclean -C ./libft/

re : fclean all clean

norme:
	norminette $(SRC_1)
	norminette $(INC_PATH_1)*.h
	norminette $(SRC_2)
	norminette $(INC_PATH_2)*.h

.PHONY : all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tradlof <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 08:22:23 by tradlof           #+#    #+#              #
#    Updated: 2018/08/08 12:04:22 by tradlof          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc $(CFLAGS)
OBJ_PATH = ./objs/
INC_PATH = ./includes/
SRC_PATH = ./srcs/

SRC_NAME = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
	ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	ft_lstmap.c ft_islower.c ft_isspace.c ft_isupper.c ft_memccpy.c \
	ft_stpcpy.c ft_stralloc.c ft_strqdupc.c ft_strlenc.c ft_strfill.c \
	ft_stpcpyc.c ft_strallocc.c ft_strcount.c ft_llintlen.c get_next_line.c \
	ft_strnew_double.c ft_list_at.c ft_list_clear.c ft_list_find.c \
	ft_list_foreach_if.c ft_list_foreach.c ft_list_last.c ft_list_merge.c \
	ft_list_push_back.c ft_list_push_front.c ft_list_push_params.c \
	ft_list_remove_if.c ft_list_reverse_fun.c ft_list_reverse.c \
	ft_list_size.c ft_list_sort.c ft_list_add_new.c ft_list_add_prev.c \
	ft_list_disconnect.c ft_list_is_head.c ft_list_is_single.c \
	ft_list_moveto_next.c ft_list_moveto_prev.c ft_list_swap.c \
	ft_create_elem.c ft_countwords.c ft_list_append.c ft_list_del.c \
	ft_list_new.c ft_list_prepend.c ft_print_list.c ft_swap.c ft_pivot.c

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

all		: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -I$(INC_PATH) -o $@ -c $<

$(NAME): $(OBJ) $(INC_PATH)
	@echo 					"\x1B[36m""		 	Maybe making a Library..." 
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo 				"\x1B[32m""		Might have made a Library... A bigass one!"

clean	:
	@echo 				"\x1B[33m""                      Might have removed a thing..."
	@rm -f $(OBJ)
	@rm -f *.o
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo 				"\x1B[31m""		A lot of things may have been removed..."
fclean: clean
	@echo 				"\x1B[31m""			  Removed moar stuff..."
	@rm -f libft.a

re:			fclean all
	@echo 				"\x1B[35m""	   Repeating everything!!!! Don't mind me... Not at all!!!"

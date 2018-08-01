#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yandriie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:49:53 by yandriie          #+#    #+#              #
#    Updated: 2018/08/01 08:37:06 by yandriie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC_FILES = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_atoibase.c ft_itoabase.c ft_strrev.c ft_lstend.c ft_realloc.c
SRC_PATH = sources/
SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

OBJ_PATH = objectives/
OBJ = $(addprefix $(OBJ_PATH), $(SRC_FILES:.c=.o))

HDR_FILES = libft.h
HDR_PATH = includes/
HDR = $(addprefix $(HDR_PATH), $(HDR_FILES))

CC = gcc
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I$(HDR_PATH)

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ)
	ar rs $(NAME) $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(HDR)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	/bin/rm -fdR $(OBJ_PATH)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
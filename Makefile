# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 08:33:46 by eenassir          #+#    #+#              #
#    Updated: 2023/11/26 22:00:36 by eenassir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_memchr.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c ft_substr.c ft_itoa.c

OBJ  = $(SRC:.c=.o)

CC = cc

AR = ar rc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BOBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean

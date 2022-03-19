# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:57:30 by hehwang           #+#    #+#              #
#    Updated: 2022/03/17 12:08:53 by hehwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CNAME = ft_isalpha.c ft_isalnum.c ft_memcpy.c ft_strjoin.c ft_strrchr.c ft_isascii.c ft_memmove.c ft_strlcat.c ft_strtrim.c ft_atoi.c ft_isdigit.c ft_memset.c ft_strlcpy.c ft_substr.c ft_bzero.c ft_isprint.c ft_split.c ft_strlen.c ft_tolower.c ft_calloc.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c
OBJS = $(CNAME:.c=.o)
NAME = libft.a

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I. -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

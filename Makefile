# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:57:30 by hehwang           #+#    #+#              #
#    Updated: 2022/03/10 16:00:55 by hehwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CNAME = ft_isalpha.c
OBJS = $(CPATH:.c=.o)
NAME = libft.a

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I. -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:57:30 by hehwang           #+#    #+#              #
#    Updated: 2022/03/21 13:13:40 by hehwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I.
AR = ar
ARFLAGS = rcs
SRCS_O = ft_isalpha.c\
	   ft_isalnum.c\
	   ft_memcpy.c\
	   ft_strjoin.c\
	   ft_strrchr.c\
	   ft_isascii.c\
	   ft_memmove.c\
	   ft_strlcat.c\
	   ft_strtrim.c\
	   ft_atoi.c\
	   ft_isdigit.c\
	   ft_memset.c\
	   ft_strlcpy.c\
	   ft_substr.c\
	   ft_bzero.c\
	   ft_isprint.c\
	   ft_split.c\
	   ft_strlen.c\
	   ft_tolower.c\
	   ft_calloc.c\
	   ft_memchr.c\
	   ft_strchr.c\
	   ft_strncmp.c\
	   ft_toupper.c\
	   ft_strmapi.c\
	   ft_striteri.c\
	   ft_putchar_fd.c\
	   ft_putendl_fd.c\
	   ft_putstr_fd.c\
	   ft_putnbr_fd.c\
	   ft_itoa.c
SRCS_B = ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstadd_front.c\
		ft_lstadd_back.c\
		ft_lstsize.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_lstlast.c
OBJS_O = $(SRCS_O:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

ifdef WITH_BONUS
	OBJS = $(OBJS_O) $(OBJS_B)
else
	OBJS = $(OBJS_O)
endif

all: $(NAME)

$(NAME): $(OBJS)
	@echo $@ Making... $
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	make WITH_BONUS=1 all

clean:
	rm -f $(OBJS_O) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean bonus

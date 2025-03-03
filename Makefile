# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brdani <brdani@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 01:08:42 by brdani            #+#    #+#              #
#    Updated: 2024/10/28 03:05:05 by brdani           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c \
		ft_print_str.c \
		ft_print_decimal.c \
		ft_putnbr_base.c \
		ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)
	rm -f test_program

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 15:05:03 by enzuguem          #+#    #+#              #
#    Updated: 2024/11/22 17:46:37 by enzuguem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_itoa.c ft_printchar.c ft_printf.c ft_printhex.c ft_printnbr.c \
		ft_printpercent.c ft_printnbr.c ft_printstr.c ft_printunsigned.c \
		ft_putchar_fd.c ft_strdup.c ft_strlen.c ft_printptr.c\

OBJS = $(FILES:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lftprintf -o main
	./main

clean:
	rm -f $(OBJS) main

fclean: clean
	rm -f $(NAME) main

re: fclean all

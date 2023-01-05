# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtumgor <mtumgor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 16:32:55 by mtumgor           #+#    #+#              #
#    Updated: 2023/01/02 18:20:14 by mtumgor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list=ft_printf.c\
	ft_putnbr.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putpointer.c\
	ft_putuint.c\
	ft_itoa.c

OBJS = $(list:.c=.o)


CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $<

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean $(NAME)

norm:
	norminette *.[ch]
.PHONY: clean fclean all re norm
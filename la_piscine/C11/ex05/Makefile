# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 07:17:17 by jyoo              #+#    #+#              #
#    Updated: 2024/09/01 23:19:40 by jyoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/do-op.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean re

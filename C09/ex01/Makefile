# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 20:40:37 by hyelee2           #+#    #+#              #
#    Updated: 2023/08/02 16:24:01 by hyelee2          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAG=-Wall -Wextra -Werror
SRCS=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
NAME=libft.a
OBJS=${SRCS:.c=.o}
INCLUDEDIR=includes

%.o: %.c includes/ft.h
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDEDIR}

${NAME}:${OBJS}
	ar cr ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 18:04:17 by hyelee2           #+#    #+#              #
#    Updated: 2023/08/03 18:45:58 by hyelee2          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRCS=srcs/ft_do_op.c srcs/ft_atoi.c srcs/print_operator.c srcs/main.c
NAME=do-op
OBJS=$(SRCS:.c=.o)
INCLUDEDIR=includes
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $@ -I $(INCLUDEDIR)

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

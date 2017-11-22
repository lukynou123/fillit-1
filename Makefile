# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 14:54:36 by xgilbert          #+#    #+#              #
#    Updated: 2017/11/22 10:32:18 by xgilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = ./main.c

RM = rm -f

OBJS = $(SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror -o

all: $(NAME)

$(NAME):
	$(CC) $(NAME) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

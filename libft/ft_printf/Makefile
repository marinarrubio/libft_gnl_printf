# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 10:27:41 by marubio-          #+#    #+#              #
#    Updated: 2023/06/26 11:29:54 by marubio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_char.c ft_numb.c ft_printf.c ft_str.c ft_pointer.c ft_unsigned.c \
			utils.c ft_unsigned.c ft_hexa.c \

NAME 	= libftprintf.a

CC		= gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

${NAME}: ${OBJS} 
	@ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

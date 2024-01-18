# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 13:17:41 by marubio-          #+#    #+#              #
#    Updated: 2023/10/10 12:51:16 by marubio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= get_next_line.c get_next_line_utils.c \

NAME 	= get_next_line.a

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


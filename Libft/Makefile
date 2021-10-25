# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 17:15:58 by leolivei          #+#    #+#              #
#    Updated: 2021/10/22 14:57:10 by leolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	./ft_isascii.c	./ft_memset.c	./ft_bzero.c	./ft_isdigit.c ./ft_strlen.c	./ft_isprint.c ./ft_isalnum.c	./ft_memcpy.c ./ft_isalpha.c	./ft_memmove.c ./ft_strlcpy.c ./ft_strlcat.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

HEAD = *.h

GCC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RANLIB = ranlib

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${RANLIB} ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all fclean clean re


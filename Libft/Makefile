# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbuny-fe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 19:59:53 by jbuny-fe          #+#    #+#              #
#    Updated: 2021/11/15 15:46:04 by leolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
HEADER		= libft.h
INCLUDES	= -Idouble_lst -I.
FLAGS      	= -Wall -Wextra -Werror -g
RM          = rm -f

# LIBFT #
SRCS        = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
                ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
                ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
                ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
                ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
                ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c \
                ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
                ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
                ft_strtrim.c ft_substr.c ft_atoi.c ft_striteri.c\
		
OBJS        = $(SRCS:.c=.o)

# Linked Lists #
BONUS_S		= ft_lstsize.c ft_lstnew.c ft_lstmap.c ft_lstiter.c ft_lstlast.c \
            	ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c \

OBJS_DLST = $(SRCS_DLST:.c=.o)

BONUS_O		= $(BONUS_S:.c=.o)

all:		$(NAME)

%.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c -o $@ $<

$(NAME): $(OBJS) $(BONUS_O) $(OBJS_DLST) $(GNL_O)
	@ar -rs $(NAME) $(OBJS) $(BONUS_O) $(OBJS_DLST) $(GNL_O)

bonus:		$(NAME) $(BONUS_O)
			@ar -rcs $(NAME) $(BONUS_O)

.c.o:
			gcc $(FLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O) $(OBJS_DLST) $(GNL_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

ap:			all clean

norm:
	norminette ${SRCS}

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus

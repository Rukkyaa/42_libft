# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 17:19:09 by rukkyaa           #+#    #+#              #
#    Updated: 2022/10/21 22:28:09 by rukkyaa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putnbr_fd.c \
		ft_strnstr.c ft_memmove.c ft_substr.c ft_strjoin.c ft_strmapi.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_strlcat.c ft_strlcpy.c main.c

OBJS = ${SRC:.c=.o}

INCLUDE = includes/

.c.o :
	gcc -Wall -Wextra -Werror -I ${INCLUDE} -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

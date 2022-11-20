# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 09:34:59 by ofannouc          #+#    #+#              #
#    Updated: 2022/11/12 09:35:19 by ofannouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c \
	  ft_putchar_fd.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_isprint.c \
	  ft_putendl_fd.c \
	  ft_strlcat.c \
	  ft_substr.c \
	  ft_atoi.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putnbr_fd.c \
	  ft_strlcpy.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_memchr.c \
	  ft_putstr_fd.c \
	  ft_strlen.c \
	  ft_toupper.c \
	  ft_calloc.c \
	  ft_memcmp.c \
	  ft_isalnum.c \
	  ft_memcpy.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_isalpha.c \
	  ft_memmove.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_isascii.c \
	  ft_memset.c \
	  ft_strrchr.c \



OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ) libft.h
	ar rc $@ $^   

%.o : %.c libft.h
	$(CC) $(FLAGS)  -c $< -o $@ 

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all

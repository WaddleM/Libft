# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/29 15:43:05 by gudelafo          #+#    #+#              #
#    Updated: 2015/12/07 10:37:33 by gudelafo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c \
	  ft_memset.c ft_strchr.c ft_strcpy.c ft_strncat.c \
	  ft_strncpy.c ft_strrchr.c ft_tolower.c ft_bzero.c ft_isalpha.c \
	  ft_isdigit.c ft_memccpy.c ft_memmove.c ft_strcat.c \
	  ft_strcmp.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	  ft_strstr.c ft_toupper.c ft_strequ.c ft_strnequ.c ft_strclr.c \
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_memalloc.c \
	  ft_memdel.c ft_strnew.c ft_strdel.c ft_putchar.c \
	  ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	  ft_strsplit.c ft_itoa.c ft_strlcat.c ft_memcmp.c \

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all	:		$(NAME)

$(NAME)	:	$(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -f $(OBJS)

fclean :	clean
	rm -f $(NAME)				

re:			fclean all

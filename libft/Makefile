# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jerasmus <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/29 09:55:45 by jerasmus          #+#    #+#              #
#    Updated: 2016/11/15 12:57:50 by jerasmus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_H = -I includes

SRC = 	ft_atoi.c ft_itoa.c ft_putchar.c \
	   	ft_putstr.c ft_strdup.c ft_strlen.c \
	   	ft_isalpha.c ft_isdigit.c \
	   	ft_isalnum.c ft_isascii.c ft_isprint.c \
	   	ft_toupper.c ft_tolower.c ft_memset.c \
	   	ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
		ft_strcmp.c ft_strncmp.c ft_memalloc.c ft_memdel.c \
		ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
		ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strtrim.c ft_putendl.c ft_putchar_fd.c \
		ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_strjoin.c ft_strsub.c ft_strsplit.c

OBJ = $(SRC:.c=.o)

SRCDIR = ./src/

OBJDIR = ./objs/

SRCS = $(addprefix $(SRCDIR), $(SRC))

OBJS = $(addprefix $(OBJDIR), $(OBJ))

CC = gcc

CFLAGS =  -O3 -ggdb -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS) $(PATH_H)
	@mv $(OBJ) $(OBJDIR)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean

	@rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjohanso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/05 12:09:10 by wjohanso          #+#    #+#              #
#    Updated: 2020/02/25 12:41:58 by wjohanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNCT = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strncat.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strchr.c\
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c\
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c\
		ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
		ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c\
		ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c\
		ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_find_magnitude.c\
		ft_is_negative.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
		ft_lstadd.c ft_lstiter.c ft_lstmap.c list_length.c is_space.c\
		ft_is_uppercase.c
SRC = main
EXE = myprog
SPACE = ______________________________________

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FUNCT)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(EXE)

re: fclean all

rerun: recompile fclean
	./$(EXE)
recompile: re compile

compile:
	gcc -Wall -Wextra -Werror -c $(SRC).c
	gcc $(SRC).o -L. -lft -o $(EXE)



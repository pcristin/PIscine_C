# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcristin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 14:26:22 by pcristin          #+#    #+#              #
#    Updated: 2019/02/11 18:45:37 by pcristin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs

HDR = ./includes

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_strlen.c $(SRC)/ft_swap.c $(SRC)/ft_strcmp.c  $(HDR)/*.h
	ar rc $(NAME) ft_putchar.o  ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o *~

fclean:
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 11:49:46 by askokov-          #+#    #+#              #
#    Updated: 2024/01/22 14:36:52 by askokov-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = \
			ft_print_format.c ft_printf.c ft_putchar.c ft_puthex.c \
			ft_putnbr.c ft_putptr.c ft_putstr.c ft_unsigned.c

LIBFT = libft

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C $(LIBFT)
	cp $(LIBFT)/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)
	$(MAKE) clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME)
	$(RM) -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
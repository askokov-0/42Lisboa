# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 15:07:12 by askokov-          #+#    #+#              #
#    Updated: 2024/04/17 15:55:38 by askokov-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = \
		ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \
		printf/ft_printf.c printf/ft_print_format.c printf/ft_putchar.c \
		printf/ft_puthex.c printf/ft_putnbr.c printf/ft_putptr.c \
		printf/ft_putstr.c printf/ft_unsigned.c \
		get_next_line/get_next_line.c get_next_line/get_next_line_utils.c 

BSOURCES = \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o) 
BOBJECTS = $(BSOURCES:.c=.o)

CC = cc 

CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

clean: 
			$(RM) $(OBJECTS) $(BOBJECTS)

fclean:		clean 
			$(RM) $(NAME)

re:		fclean all

bonus:	$(BOBJECTS)
		ar rcs $(BOBJECTS)
		touch bonus

.PHONY: all clean fclean re
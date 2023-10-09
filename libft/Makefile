# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 18:07:47 by askokov-          #+#    #+#              #
#    Updated: 2023/10/09 18:26:22 by askokov-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = \
		ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c

BSOURCES = \

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

.PHONY: all clean fclean re
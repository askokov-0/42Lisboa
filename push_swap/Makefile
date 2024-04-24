
NAME = push_swap

SRC_PATH = src/

OBJ_PATH = obj/

LIBFT = libft

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
		$(MAKE) clean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
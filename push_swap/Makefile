
NAME = push_swap

SRC_PATH = src
OBJ_PATH = obj
CMMDS_PATH = commands
LIBFT_PATH = libft

COMMANDS = $(CMMDS_PATH)/push.c $(CMMDS_PATH)/rev_rotate.c $(CMMDS_PATH)/rotate.c \
			$(CMMDS_PATH)/sort_stacks.c $(CMMDS_PATH)/sort_three.c $(CMMDS_PATH)/swap.c

PUSH_SWAP = $(SRC_PATH)/handle_errors.c $(SRC_PATH)/init_a_to_b.c $(SRC_PATH)/init_b_to_a.c \
			$(SRC_PATH)/push_swap.c $(SRC_PATH)/stack_init.c $(SRC_PATH)/stack_utils.C


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

NAME = push_swap

SRC_PATH = srcs
OBJ_PATH = obj

COMMANDS = $(SRC_PATH)/commands/push.c $(SRC_PATH)/commands/rev_rotate.c $(SRC_PATH)/commands/rotate.c \
			$(SRC_PATH)/commands/sort_stacks.c $(SRC_PATH)/commands/sort_three.c $(SRC_PATH)/commands/swap.c

SRCS_PUSH_SWAP = $(SRC_PATH)/push_swap/handle_errors.c $(SRC_PATH)/push_swap/init_a_to_b.c $(SRC_PATH)/push_swap/init_b_to_a.c \
			$(SRC_PATH)/push_swap/push_swap.c $(SRC_PATH)/push_swap/stack_init.c $(SRC_PATH)/push_swap/stack_utils.c

LIBFT = $(SRC_PATH)/libft/ft_bzero.c $(SRC_PATH)/libft/ft_isalnum.c $(SRC_PATH)/libft/ft_isalpha.c $(SRC_PATH)/libft/ft_isascii.c \
		$(SRC_PATH)/libft/ft_isdigit.c $(SRC_PATH)/libft/ft_isprint.c $(SRC_PATH)/libft/ft_memcpy.c $(SRC_PATH)/libft/ft_memmove.c \
		$(SRC_PATH)/libft/ft_memset.c $(SRC_PATH)/libft/ft_strlen.c $(SRC_PATH)/libft/ft_strlcpy.c $(SRC_PATH)/libft/ft_strlcat.c \
		$(SRC_PATH)/libft/ft_toupper.c $(SRC_PATH)/libft/ft_tolower.c $(SRC_PATH)/libft/ft_strchr.c $(SRC_PATH)/libft/ft_strrchr.c \
		$(SRC_PATH)/libft/ft_strncmp.c $(SRC_PATH)/libft/ft_memchr.c $(SRC_PATH)/libft/ft_memcmp.c $(SRC_PATH)/libft/ft_strnstr.c \
		$(SRC_PATH)/libft/ft_atoi.c $(SRC_PATH)/libft/ft_calloc.c $(SRC_PATH)/libft/ft_strdup.c $(SRC_PATH)/libft/ft_substr.c \
		$(SRC_PATH)/libft/ft_strjoin.c $(SRC_PATH)/libft/ft_strtrim.c $(SRC_PATH)/libft/ft_split.c $(SRC_PATH)/libft/ft_itoa.c \
		$(SRC_PATH)/libft/ft_strmapi.c $(SRC_PATH)/libft/ft_striteri.c $(SRC_PATH)/libft/ft_putchar_fd.c $(SRC_PATH)/libft/ft_putstr_fd.c \
		$(SRC_PATH)/libft/ft_putendl_fd.c $(SRC_PATH)/libft/ft_putnbr_fd.c $(SRC_PATH)/libft/printf/ft_printf.c $(SRC_PATH)/libft/printf/ft_print_format.c \
		$(SRC_PATH)/libft/printf/ft_putchar.c $(SRC_PATH)/libft/printf/ft_puthex.c $(SRC_PATH)/libft/printf/ft_putnbr.c $(SRC_PATH)/libft/printf/ft_putptr.c \
		$(SRC_PATH)/libft/printf/ft_putstr.c $(SRC_PATH)/libft/printf/ft_unsigned.c

SRCS = $(COMMANDS) $(SRCS_PUSH_SWAP) $(LIBFT)

OBJS = $(SRCS:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) -r $(OBJ_PATH)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs

INCLUDES_DIR = includes

SRCS = $(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_swap.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
NAME    = libft_ctype.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I.

SRCS    = $(wildcard functions/*.c)
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test_runner
	LC_ALL=C ./test_runner

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) test_runner

re: fclean all

.PHONY: all clean fclean re test

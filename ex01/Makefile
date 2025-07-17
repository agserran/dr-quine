CC = gcc
CFLAGS = -Wall -Werror -Wextra -nostartfiles

NAME = Grace
SRCS = Grace.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) Grace_kid.c

re: fclean all

.PHONY: all clean fclean re

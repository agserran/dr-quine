CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = Colleen

SRCS = Colleen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY:
	clean all fclean re
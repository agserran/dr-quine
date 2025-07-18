CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = Sully
SRCS = Sully.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) Sully0.c Sully1.c Sully2.c Sully3.c Sully4.c Sully0 Sully1 Sully2 Sully3 Sully4 Sully

re: fclean all

.PHONY: all clean fclean re
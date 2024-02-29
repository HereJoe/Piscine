NAME = do-op
SRC = do_op.c operation.c
HEADER = operation.h
all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Werror -Wextra -I $(HEADER) $(SRC)
clean:
	rm -f $(NAME)
fclean: clean
	rm -f $(NAME)
re: fclean all
COMPILER	= cc
CFLAGS		= -Wall -Wextra -Werror -I $(HEADERS)
SRCS		= ./srcs
TARGET		= libft.a
HEADERS		= ./includes
OBJS		= $(SRCS)/ft_putchar.o $(SRCS)/ft_swap.o \
				$(SRCS)/ft_putstr.o $(SRCS)/ft_strlen.o \
				$(SRCS)/ft_strcmp.o

all: $(TARGET)

clean:
	rm -rf $(OBJS)

fclean:
	rm -f $(OBJS) $(TARGET)

re: fclean all

$(TARGET): $(OBJS)
	ar -rc $(TARGET) $(OBJS)

$(SRCS)/ft_putchar.o: $(SRCS)/ft_putchar.c
	$(COMPILER) -c  $(CFLAGS) $(SRCS)/ft_putchar.c -o $(SRCS)/ft_putchar.o

$(SRCS)/ft_swap.o: $(SRCS)/ft_swap.c
	$(COMPILER) -c  $(CFLAGS) $(SRCS)/ft_swap.c -o $(SRCS)/ft_swap.o

$(SRCS)/ft_putstr.o: $(SRCS)/ft_putstr.c
	$(COMPILER) -c  $(CFLAGS) $(SRCS)/ft_putstr.c -o $(SRCS)/ft_putstr.o

$(SRCS)/ft_strlen.o: $(SRCS)/ft_strlen.c
	$(COMPILER) -c  $(CFLAGS) $(SRCS)/ft_strlen.c -o $(SRCS)/ft_strlen.o

$(SRCS)/ft_strcmp.o: $(SRCS)/ft_strcmp.c
	$(COMPILER) -c  $(CFLAGS) $(SRCS)/ft_strcmp.c -o $(SRCS)/ft_strcmp.o
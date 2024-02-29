#!/bin/sh
CC=gcc
CFLAGS="-Wall -Werror -Wextra"
L_NAME=libft.a
SRC_FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

$CC $CFLAGS -c $SRC_FILES
ar -rcs $L_NAME $(echo $SRC_FILES | sed 's/\.c/\.o/g')
ranlib $L_NAME
rm $(echo $SRC_FILES | sed 's/\.c/\.o/g')

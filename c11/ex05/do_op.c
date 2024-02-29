/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:45:02 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 12:45:06 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "operation.h"

long	ind_op(char *s)
{
	if (s[1] != '\0')
		return (-1);
	if (s[0] == '+')
		return (0);
	else if (s[0] == '-')
		return (1);
	else if (s[0] == '*')
		return (2);
	else if (s[0] == '/')
		return (3);
	else if (s[0] == '%')
		return (4);
	return (-1);
}

long	decode_n(char *s)
{
	long	signal;
	long	n;

	signal = 1;
	n = 0;
	while (*s == '\t' || *s == '\n' || *s == '\r'\
		|| *s == '\v' || *s == '\f' || *s == ' ')
		s++;
	while (*s == '-' || *s == '+')
	{
		if (*s++ == '-')
			signal *= -1;
	}
	if (*s < '0' || *s > '9')
		return (0);
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	n = n * signal;
	return (n);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		write(1, &(char){'-'}, 1);
		nb = -nb;
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	write(1, &(char){nb % 10 + '0'}, 1);
}

void	do_op(long a, long b, long op, long (*operation[])(long, long))
{
	if (b == 0 && op == 3)
		write(1, "Stop : division by zero", 23);
	else if (b == 0 && op == 4)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(operation[op](a, b));
}

int	main(int argc, char **argv)
{
	long		n1;
	long		n2;
	long		op;
	t_operation	*oparr;

	if (argc == 4)
	{
		op = ind_op(argv[2]);
		if (op < 0)
			write(1, "0", 1);
		else
		{
			n1 = decode_n(argv[1]);
			n2 = decode_n(argv[3]);
			oparr = (t_operation[]){op_add, op_sub, op_mul, op_div, op_mod};
			do_op(n1, n2, op, oparr);
		}
	}
	return (0);
}

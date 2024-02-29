/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 00:52:52 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 19:09:15 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	size;
	int	i;
	int	j;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		size++;
	}
	if (size < 2)
		return (0);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (size);
}

void	print_num(int nbr, char *base, int size)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		write(1, &(char){'-'}, 1);
		n *= -1;
	}
	if (n >= size)
		print_num(n / size, base, size);
	write(1, &base[n % size], 1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = check_base(base);
	if (size == 0)
		return (0);
	print_num(nbr, base, size);
	return (1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	signal;

	n = 0;
	signal = 1;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v'\
		|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			signal *= -1;
	}
	while (*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return (n * signal);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	rst;

	num = ft_atoi(str);
	rst = ft_putnbr_base(num, base);
	if (rst == 0)
		return (0);
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	puts("\nnbr:15, base:ABC");
	ft_atoi_base("-+-+15ab3", "ABC");
	puts("\nnbr:5, base:01");
	ft_atoi_base("   ++--5a34", "01");
	puts("\nnbr:-1859, base:01234567AB");
	ft_atoi_base("   -----1859d11", "01234567AB");
	puts("\nnbr:5, base:010C");
	ft_atoi_base("5", "010");
	puts("\nnbr:5, base:1");
	ft_atoi_base("5", "1");
	puts("\nnbr:5, base:");
	ft_atoi_base("5", "");
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:34:03 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 19:16:45 by zhyang           ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = check_base(base);
	if (size == 0)
		return ;
	print_num(nbr, base, size);
}
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

char	*get_signal(char *str, int *signal)
{
	*signal = 1;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v'\
		|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			*signal *= -1;
	}
	return (str);
}

int	base_2_digital_nn(char *str, char *base, int size)
{
	int	ind;
	int	rst;

	rst = 0;
	while (*str != '\0')
	{
		ind = 0;
		while (base[ind] != '\0')
		{
			if (base[ind] == *str)
			{
				rst = rst * size + ind;
				break ;
			}
			ind++;
		}
		if (base[ind] == '\0')
			break ;
		str++;
	}
	return (rst);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	rst;
	int	signal;

	size = check_base(base);
	if (size == 0)
		return (0);
	str = get_signal(str, &signal);
	rst = base_2_digital_nn(str, base, size);
	return (rst * signal);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:45:39 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/24 19:39:33 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int n)
{
	write(1, &(char []){'0' + n / 10, '0' + n % 10}, 2);
}

void	print_pair(i, j)
{
	print_num(i);
	write(1, " ", 1);
	print_num(j);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_pair(i, j);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/

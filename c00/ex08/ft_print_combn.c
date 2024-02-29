/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:41:47 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/24 19:56:23 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	do_ft_print_combn(char arr[], int bits, int cur_bit, int begin)
{
	int	i;

	i = begin;
	while (i <= 9 - (bits - cur_bit))
	{
		arr[cur_bit - 1] = '0' + i;
		if (cur_bit == bits)
		{
			if (i != cur_bit - 1)
			{
				write(1, ", ", 2);
			}
			write(1, arr, bits);
		}
		else
		{
			do_ft_print_combn(arr, bits, cur_bit + 1, i + 1);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[9];

	do_ft_print_combn(arr, n, 1, 0);
}

/*int	main(void)
{
	ft_print_combn(2);
}*/

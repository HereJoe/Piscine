/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:01:05 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 21:08:07 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *tab, int a, int b)
{
	int	tmp;

	tmp = tab[a];
	tab[a] = tab[b];
	tab[b] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	min;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		min = i;
		j = size;
		while (j > i)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j--;
		}
		if (i != min)
		{
			swap(tab, i, min);
		}
		i++;
	}
}

/*
void	print_n(int n)
{
	if (n / 10 > 0)
	{
		print_n(n / 10);
	}
	write(1, &(char){n % 10 + '0'}, 1);
}

int	main(void)
{
	int	tab[5] = {9, 1, 3, 7, 5};
	ft_sort_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
	{
		print_n(tab[i]);
		write(1, &(char){' '}, 1);
	}
	return (0);
}
*/

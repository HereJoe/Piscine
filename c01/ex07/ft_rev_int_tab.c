/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:53:41 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 21:07:10 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	tmp;

	l = 0;
	r = size - 1;
	while (l < r)
	{
		tmp = tab[l];
		tab[l] = tab[r];
		tab[r] = tmp;
		l++;
		r--;
	}
}

void	print_n(int n)
{
	if (n / 10 > 0)
	{
		print_n(n / 10);
	}
	write(1, &(char){n % 10 + '0'}, 1);
}

/*
int	main(void)
{
	int tab[] = {1, 3, 5, 7, 9};
	ft_rev_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
	{
		print_n(tab[i]);
		write(1, &(char){' '}, 1);
	}
	return (0);
}
*/

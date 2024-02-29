/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:25:50 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 20:53:10 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
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
	int	a;
	int	b;

	a = 30;
	b = 42;
	print_n(a);
	write(1, &(char){' '}, 1);
	print_n(b);
	ft_swap(&a, &b);
	write(1, &(char){'\n'}, 1);
	print_n(a);
	write(1, &(char){' '}, 1);
	print_n(b);
	return (0);
}
*/

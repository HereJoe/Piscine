/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:32:41 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 20:56:26 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
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

	a = 35;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	print_n(a);
	write(1, &(char){' '}, 1);
	print_n(b);
	return (0);
}
*/

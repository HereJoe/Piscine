/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:30:16 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 20:54:42 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int	div;
	int	mod;

	a = 35;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	print_n(div);
	write(1, &(char){' '}, 1);
	print_n(mod);
	return (0);
}
*/

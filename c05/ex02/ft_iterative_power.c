/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:29:25 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 14:29:26 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	rst;

	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	rst = 1;
	while (power-- > 0)
		rst *= nb;
	return (rst);
}

/*
#include <stdio.h>
int main(void)
{
	printf("5,-3:%d\n", ft_iterative_power(5, -3));
	printf("0,0:%d\n", ft_iterative_power(0, 0));
	printf("2,0:%d\n", ft_iterative_power(2, 0));
	printf("1,5:%d\n", ft_iterative_power(1, 5));
	printf("-2,7:%d\n", ft_iterative_power(-2, 7));
	printf("-2,8:%d\n", ft_iterative_power(-2, 8));
}
*/
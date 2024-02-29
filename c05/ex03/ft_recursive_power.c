/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:33:44 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 14:33:46 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("5,-3:%d\n", ft_recursive_power(5, -3));
	printf("0,0:%d\n", ft_recursive_power(0, 0));
	printf("2,0:%d\n", ft_recursive_power(2, 0));
	printf("1,5:%d\n", ft_recursive_power(1, 5));
	printf("-2,7:%d\n", ft_recursive_power(-2, 7));
	printf("-2,8:%d\n", ft_recursive_power(-2, 8));
}
*/
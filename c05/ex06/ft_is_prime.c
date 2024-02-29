/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:41:27 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 14:41:28 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 46340

int	ft_sqrt_nearby(int nb)
{
	long	l;
	long	r;
	long	mid;

	if (nb >= N * N)
		return (N);
	l = 1;
	r = nb;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (r);
}

int	ft_is_prime(int nb)
{
	int	max;
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	max = ft_sqrt_nearby(nb);
	i = 3;
	while (i <= max)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("-3:%d\n", ft_is_prime(-3));
	printf("1:%d\n", ft_is_prime(1));
	printf("2:%d\n", ft_is_prime(2));
	printf("3:%d\n", ft_is_prime(3));
	printf("8:%d\n", ft_is_prime(8));
	printf("13:%d\n", ft_is_prime(13));
	printf("2147483647:%d\n", ft_is_prime(2147483647));
	printf("2147483646:%d\n", ft_is_prime(2147483646));
	printf("2147483645:%d\n", ft_is_prime(2147483645));
}
*/
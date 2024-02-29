/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:37:51 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 14:37:52 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 46340

int	ft_sqrt(int nb)
{
	long	l;
	long	r;
	long	mid;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > N * N)
		return (0);
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
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("-3:%d\n", ft_sqrt(-3));
	printf("0:%d\n", ft_sqrt(0));
	printf("1:%d\n", ft_sqrt(1));
	printf("49:%d\n", ft_sqrt(49));
	printf("48:%d\n", ft_sqrt(48));
	printf("50:%d\n", ft_sqrt(50));
	printf("2147483647:%d\n", ft_sqrt(2147483647));
	printf("2147483646:%d\n", ft_sqrt(2147483646));
	printf("2147395600:%d\n", ft_sqrt(2147395600));
}
*/
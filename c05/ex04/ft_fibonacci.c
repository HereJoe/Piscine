/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:35:28 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 14:35:29 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("-5:%d\n", ft_fibonacci(-5));
	printf("0:%d\n", ft_fibonacci(0));
	printf("1:%d\n", ft_fibonacci(1));
	printf("2:%d\n", ft_fibonacci(2));
	printf("3:%d\n", ft_fibonacci(3));
	printf("4:%d\n", ft_fibonacci(4));
	printf("5:%d\n", ft_fibonacci(5));
}
*/
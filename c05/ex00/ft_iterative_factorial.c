/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:26:29 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 14:26:32 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
		factorial *= nb--;
	return (factorial);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(0));
}
*/

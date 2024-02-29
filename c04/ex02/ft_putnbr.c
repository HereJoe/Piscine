/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:33:32 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 13:33:33 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nng(int n)
{
	if (n / 10 > 0)
		put_nng(n / 10);
	write(1, &(char){n % 10 + '0'}, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, &(char){'-'}, 1);
		if (nb == -2147483648)
		{
			write(1, &(char){'2'}, 1);
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	put_nng(nb);
}
/*
int	main(void)
{
	int n = 42;
	ft_putnbr(n);
	n = 0;
	ft_putnbr(n);
	n = -2147483648;
	ft_putnbr(n);
	n = -22;
	ft_putnbr(n);
}
*/
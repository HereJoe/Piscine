/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:27:51 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/25 10:01:49 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	s[32];
	int		ind;

	if (nb == -2147483648)
	{
		write(1, &(char []){'-', '2', '1', '4', '7', \
			'4', '8', '3', '6', '4', '8'}, 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, &(char){'-'}, 1);
		nb *= -1;
	}
	ind = 0;
	while (nb > 0)
	{
		s[ind++] = '0' + nb % 10;
		nb /= 10;
	}
	while (ind > 0)
	{
		write(1, &s[--ind], 1);
	}
}

/*int	main(void)
{
	ft_putnbr(-8);
	ft_putnbr(9);
	ft_putnbr(5678);
	ft_putnbr(0);
	ft_putnbr(-2147483648);
}*/

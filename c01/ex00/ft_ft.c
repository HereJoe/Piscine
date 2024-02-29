/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:41:18 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 19:18:16 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int	*nbr)
{
	*nbr = 42;
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
	int		n;
	char	seperator;

	n = 30;
	seperator = '\n';
	print_n(n);
	ft_ft(&n);
	write(1, &seperator, 1);
	print_n(n);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:04:50 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/17 20:04:51 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <unistd.h>
void	f(int i)
{
	write(1, &(char){i + '0'}, 1);
}
int	main(void)
{
	int a[] = {1,2,3,4,5};
	ft_foreach(a, 5, &f);
	ft_foreach(a, 5, f);
}
*/

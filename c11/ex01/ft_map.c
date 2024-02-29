/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:15:06 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/17 20:15:07 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*dest;
	int	i;

	dest = malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		dest[i] = f(tab[i]);
	return (dest);
}
/*
int	f(int i)
{
	return i + 1;
}

#include<unistd.h>
int	main(void)
{
	int a[] = {1,2,3,4,5};
	int *dest = ft_map(a, 5, &f);
	for (size_t i = 0; i < 5; i++)
	{
		write(1, &(char){dest[i]+'0'}, 1);
	}
	return (0);
}
*/
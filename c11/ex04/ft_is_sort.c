/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:08:17 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 12:08:18 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length <= 1)
		return (1);
	i = 0;
	while (++i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
	}
	return (1);
}
/*
int f(int a, int b)
{
	return (a - b);
}
#include<unistd.h>
int	main(void)
{
	int a[] = {1, 2, 3, 3, 2};
	write(1, &(char){ft_is_sort(a, 5, f)+'0'}, 1);
	return (0);
}
*/
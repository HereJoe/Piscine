/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:47:40 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 23:47:46 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	ind;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	ind = 0;
	while (min + ind < max)
	{
		arr[ind] = min + ind;
		ind ++;
	}
	return (arr);
}
/*
#include <stdio.h>
void	test(int min, int max)
{
	int *arr;
	int i;

	arr = ft_range(min, max);
	printf("min:%d,max:%d\n", min, max);
	i = 0;
	while (min + i < max)
	{
		printf("%d ", arr[i++]);
	}
	puts("");
}

int main(void)
{
	test(1,3);
	test(-5,3);
	test(3,3);
	test(4,3);
}
*/
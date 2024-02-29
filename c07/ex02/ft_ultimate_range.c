/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:14:58 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/14 00:26:12 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	ind;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (range == 0)
		return (-1);
	ind = -1;
	while (++ind < size)
		(*range)[ind] = min + ind;
	return (size);
}
/*
#include <stdio.h>
void test(int min, int max)
{
	int	*range = NULL;
	int rst;
	int i;

	printf("min:%d, max:%d\n", min, max);
	rst = ft_ultimate_range(&range, min, max);
	if (range == NULL)
		printf("%p", range);
	else
	{
		i = -1;
		while (++i < max - min)
			printf("%d ", range[i]);
	}
	printf(",result:%d\n\n", rst);
}
int	main(void)
{
	test(1, 9);
	test(3, 2);
	test(2, 2);
	test(-3, -2);
	test(-2, -3);
	test(0, 0);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:20:53 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/04 22:48:05 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "myarguments.h"

void	generate_comb(struct s_MyArguments arg, int bit, int product)
{
	int	i;

	product = product * 10;
	i = 1;
	while (i <= arg.scope)
	{
		if (arg.exist[i - 1] == 0)
		{
			if (bit == 1)
			{
				arg.arr[*(arg.ind)] = product + i;
				*(arg.ind) = *(arg.ind) + 1;
			}
			else
			{
				arg.exist[i - 1] = 1;
				generate_comb(arg, bit - 1, product + i);
				arg.exist[i - 1] = 0;
			}
		}
		i++;
	}
}

char	**ints_2_strs(int *arr, int size, int scope)
{
	char	*str;
	int		j;
	int		num;
	char	**strs;

	strs = (char **)malloc(size * 8);
	while (size > 0)
	{
		str = malloc(scope);
		j = scope;
		num = arr[size - 1];
		while (j > 0)
		{
			str[j - 1] = num % 10 + '0';
			num /= 10;
			j--;
		}
		strs[size - 1] = str;
		size --;
	}
	return (strs);
}

char	**generate_combinations(int scope, int *len)
{
	int						i;
	int						*arr;
	int						ind;
	int						*exist;
	struct s_MyArguments	arg;

	i = 1;
	*len = 1;
	while (i <= scope)
		*len = *len * i++;
	arr = (int *)malloc(*len * 4);
	exist = malloc(scope * 4);
	i = 0;
	while (i < scope)
		exist[i++] = 0;
	ind = 0;
	arg.arr = arr;
	arg.ind = &ind;
	arg.exist = exist;
	arg.scope = scope;
	generate_comb(arg, scope, 0);
	return (ints_2_strs(arr, *len, scope));
}

/*
#include <stdio.h>
int main(void)
{
	char **arr;
	int len;
	
	arr = generate_combinations(4, &len);
	while (len > 0)
	{
		printf("%s\n", arr[len - 1]);
		len -= 1;
	}
	return (0);
}
*/

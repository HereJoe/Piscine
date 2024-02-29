/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:12:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 23:12:59 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	partition(char **strs, int l, int r)
{
	char	*pivot;

	pivot = strs[l];
	while (l < r)
	{
		while (l < r && ft_strcmp(pivot, strs[r]) <= 0)
			r--;
		strs[l] = strs[r];
		while (l < r && ft_strcmp(pivot, strs[l]) >= 0)
			l++;
		strs[r] = strs[l];
	}
	strs[l] = pivot;
	return (l);
}

void	quick_sort(char **strs, int l, int r)
{
	int	pivot_ind;

	if (l >= r)
		return ;
	pivot_ind = partition(strs, l, r);
	quick_sort(strs, l, pivot_ind - 1);
	quick_sort(strs, pivot_ind + 1, r);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	quick_sort(++argv, 0, argc - 2);
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			write(1, &argv[i][j++], 1);
		write(1, &(char){'\n'}, 1);
		i++;
	}
	return (0);
}

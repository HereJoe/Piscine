/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:49:25 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 15:49:26 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	partition(char **strs, int l, int r, int (*cmp)(char *, char *))
{
	char	*pivot;

	pivot = strs[l];
	while (l < r)
	{
		while (l < r && cmp(pivot, strs[r]) <= 0)
			r--;
		strs[l] = strs[r];
		while (l < r && cmp(pivot, strs[l]) >= 0)
			l++;
		strs[r] = strs[l];
	}
	strs[l] = pivot;
	return (l);
}

void	quick_sort(char **strs, int l, int r, int (*cmp)(char *, char *))
{
	int	pivot_ind;

	if (l >= r)
		return ;
	pivot_ind = partition(strs, l, r, cmp);
	quick_sort(strs, l, pivot_ind - 1, cmp);
	quick_sort(strs, pivot_ind + 1, r, cmp);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	if (i > 1)
		quick_sort(tab, 0, i - 1, cmp);
}

/*
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
int	main(int argc, char **argv)
{
	ft_advanced_sort_string_tab(argv, ft_strcmp);
	int i = 0;
	int j;
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
*/
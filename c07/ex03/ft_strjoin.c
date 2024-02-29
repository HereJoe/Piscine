/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:06:25 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/14 10:06:28 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total;

	total = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		if (i > 0)
			while (sep[++j])
				total++;
		j = -1;
		while (strs[i][++j])
			total++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		ind;

	dest = malloc(str_len(size, strs, sep) + 1);
	ind = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		if (i > 0)
			while (sep[j])
				dest[ind++] = sep[j++];
		j = 0;
		while (strs[i][j])
			dest[ind++] = strs[i][j++];
	}
	dest[ind] = '\0';
	return (dest);
}
/*
#include <stdio.h>
void test(int size, char **strs, char *sep)
{
	char *dest;

	dest = ft_strjoin(size, strs, sep);
	for (int i = 0; i < size; ++i)
	{
		printf("String %d:%s\n", i, strs[i]);
	}
	printf("dest:%s\n\n", dest);
	free(dest);
}

int main(void)
{
	char *strs[] = {"abc", "1234", "", "ok"};
	test(4, strs,"||");
	return (0);
}
*/
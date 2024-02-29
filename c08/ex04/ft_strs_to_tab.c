/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:50:35 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/14 20:50:36 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_size(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_copy(char *s)
{
	char	*t;
	int		k;

	k = ft_size(s);
	t = (char *)malloc(sizeof(char) * (k + 1));
	if (t == NULL)
		return (NULL);
	k = -1;
	while (s[++k])
		t[k] = s[k];
	t[k] = '\0';
	return (t);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s;
	int			i;

	s = malloc(sizeof(t_stock_str) * (ac + 1));
	if (s == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		s[i].size = ft_size(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_copy(av[i]);
	}
	s[i].size = 0;
	s[i].str = NULL;
	s[i].copy = NULL;
	return (s);
}

/*
#include <stdio.h>
void	test(int ac, char **av)
{
	t_stock_str	*s = ft_strs_to_tab(ac, av);
	int	i;

	i = -1;
	while (s[++i].str)
	{
		printf("size:%d\nstr:%s\ncopy:%s\n\n",s[i].size, s[i].str, s[i].copy);
	}
	free(s);
}
int	main(void)
{
	test(4, (char*[]){"abc", "1234", "", "ok"});
}
*/
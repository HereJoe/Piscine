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
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_n2(int n)
{
	if (n >= 10)
		ft_print_n2(n / 10);
	write(1, &(char){n % 10 + '0'}, 1);
}

void	ft_print_n(int n, char end)
{
	ft_print_n2(n);
	write(1, &end, 1);
}

void	ft_print(char *s, int size, char end)
{
	write(1, s, size);
	write(1, &end, 1);
}

void	ft_show_tab(t_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != NULL)
	{
		ft_print(par[i].str, par[i].size, '\n');
		ft_print_n(par[i].size, '\n');
		ft_print(par[i].copy, par[i].size, '\n');
	}
}
/*
#include "ft_strs_to_tab.c"
void	test(int ac, char **av)
{
	t_stock_str	*s = ft_strs_to_tab(ac, av);
	int	i;

	i = -1;
	while (s[++i].str)
	{
		//printf("size:%d\nstr:%s\ncopy:%s\n\n",s[i].size, s[i].str, s[i].copy);
	}
	ft_show_tab(s);
}
int	main(void)
{
	test(4, (char*[]){"abc", "1234", "", "ok"});
}
*/
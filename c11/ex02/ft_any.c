/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:43:38 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 11:43:39 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = -1;
	while (tab[++i])
		if (f(tab[i]) != 0)
			return (1);
	return (0);
}
/*
int	f(char *s)
{
	if (*s=='\0')
		return 0;
	return 1;
}

#include<unistd.h>
int	main(void)
{
	char* a[] = {"","", NULL};
	write(1, &(char){ft_any(a, f)+'0'}, 1);
	return (0);
}
*/
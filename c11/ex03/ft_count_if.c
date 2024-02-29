/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:01:44 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 12:01:45 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]) != 0)
			count++;
	return (count);
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
	char* a[] = {"","", ""};
	write(1, &(char){ft_count_if(a, 3, f)+'0'}, 1);
	return (0);
}
*/
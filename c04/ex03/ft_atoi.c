/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:33:41 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 13:33:42 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;
	int	signal;

	n = 0;
	signal = 1;
	while (*str == '\t' || *str == '\n' || *str == '\r'\
		|| *str == '\v' || *str == '\f' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			signal *= -1;
	}
	while (*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return (n * signal);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int	main(void)
{
	char* str = " ---+--+1234ab567";
	printf("%d\n",atoi(str));
	printf("%d\n",ft_atoi(str));
	char* str2 = "+1234b567";
	printf("%d\n",atoi(str2));
	printf("%d\n",ft_atoi(str2));
}
*/
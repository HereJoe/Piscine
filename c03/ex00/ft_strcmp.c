/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:21:58 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/04 15:25:05 by zhyang           ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	char *a = "abc";
	char *b = "abc";
	int rst = ft_strcmp(a, b);
	puts(a);
	puts(b);
	printf("%d\n", rst);

	a = "abc";
	b = "ebc";
	rst = ft_strcmp(a, b);
	puts(a);
	puts(b);
	printf("%d\n", rst);
	
	a = "abc";
	b = "abcdefg";
	rst = ft_strcmp(a, b);
	puts(a);
	puts(b);
	printf("%d\n", rst);
}
*/

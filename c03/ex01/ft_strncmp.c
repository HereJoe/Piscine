/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:21:58 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/04 15:26:01 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2 || *s1 == '\0')
			break ;
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

/*
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return 0;
	int i;
	
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			break;
		i++;
	}
	if (i == n)
		i = n - 1;
	return s1[i] - s2[i];
}
*/
/*
#include <stdio.h>
int main(void)
{
	char *a = "ebc";
	char *b = "abc";
	int len = 0;
	int rst = ft_strncmp(a, b, len);
	puts(a);
	puts(b);
	printf("%d\n", len);
	printf("%d\n", rst);
	
	a = "ebc";
	b = "abc";
	len = 2;
	rst = ft_strncmp(a, b, len);
	puts(a);
	puts(b);
	printf("%d\n", len);
	printf("%d\n", rst);
	
	a = "abc";
	b = "abcdefg";
	len = 4;
	rst = ft_strncmp(a, b, len);
	puts(a);
	puts(b);
	printf("%d\n", len);
	printf("%d\n", rst);
	
	len = 3;
	rst = ft_strncmp(a, b, len);
	puts(a);
	puts(b);
	printf("%d\n", len);
	printf("%d\n", rst);
}
*/

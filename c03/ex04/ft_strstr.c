/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:21:58 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/04 15:28:21 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	match(char *str, char *to_find, int begin)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0' && to_find[i] == str[begin + i])
		i++;
	return (to_find[i] == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (match(str, to_find, i++))
			return (str + (--i));
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "abcdef";
	char *to_find = "bc";
	char *rst = ft_strstr(str, to_find);
	printf("str:%s\n", str);
	printf("to_find:%s\n", to_find);
	printf("result:%s\n", rst);
	
	str = "abcdef";
	to_find = "ec";
	rst = ft_strstr(str, to_find);
	printf("str:%s\n", str);
	printf("to_find:%s\n", to_find);
	printf("result:%s\n", rst);
}
*/

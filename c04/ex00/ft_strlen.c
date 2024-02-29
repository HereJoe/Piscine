/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:33:06 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 13:33:10 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char* str = "abcd";
	int count;

	count = strlen(str);
	printf("%lu\n", strlen(str));
	printf("%d\n",ft_strlen(str));
	str = "";
	printf("%lu\n", strlen(str));
	printf("%d\n",ft_strlen(str));
	//str = NULL;
	//printf("%d\n", strlen(str));
	//printf("%d\n",ft_strlen(str));
}
*/
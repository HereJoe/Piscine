/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:27:16 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 23:41:56 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*des;

	if (src == NULL)
		return (NULL);
	count = 0;
	while (src[count] != '\0')
		count++;
	des = (char *) malloc(sizeof(char) * (count + 1));
	count = 0;
	while (src[count] != '\0')
	{
		des[count] = src[count];
		count++;
	}
	des[count] = '\0';
	return (des);
}

/*
#include <stdio.h>
#include <string.h>
void test(char *src)
{
	char *des;
	char *des2;

	des = NULL;
	des = strdup(src);
	des2 = ft_strdup(src);
	printf("src:%s\ndes:%s\ndes2:%s\n\n", src, des, des2);
}
int main(void)
{
	test("abc");
	test("");
	//test(NULL);
}
*/
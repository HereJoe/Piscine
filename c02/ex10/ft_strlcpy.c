/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:46:43 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 14:17:03 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	print_n(int n)
{
	if (n / 10 > 0)
	{
		print_n(n / 10);
	}
	write(1, &(char){n % 10 + '0'}, 1);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *src = "hello";

	char dest1[] = "1234567890";
	int len = 0;
	int num;
	num = ft_strlcpy(dest1, src, len);
	char sep = '\n';
	printf("len:%d,num:%d\n",len, num);
	write(1, src, 5);
	write(1, &sep, 1);
	write(1, dest1, 10);
	write(1, &sep, 1);
	
	char dest2[] = "1234567890";
	len = 1;
	num = ft_strlcpy(dest2, src, len);
	printf("len:%d,num:%d\n",len, num);
	write(1, src, 5);
	write(1, &sep, 1);
	write(1, dest2, 10);
	write(1, &sep, 1);
	puts(dest2);

	char dest3[] = "1234567890";
	len = 5;
	num = ft_strlcpy(dest3, src, len);
	printf("len:%d,num:%d\n",len, num);
	write(1, src, 5);
	write(1, &sep, 1);
	write(1, dest3, 10);
	write(1, &sep, 1);


	char dest4[] = "1234567890";
	len = 8;
	num = ft_strlcpy(dest4, src, len);
	printf("len:%d,num:%d\n",len, num);
	write(1, src, 5);
	write(1, &sep, 1);
	write(1, dest4, 10);
	write(1, &sep, 1);
	return (0);
}
*/

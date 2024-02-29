/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:01:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/04 15:30:17 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldes;
	unsigned int	lsrc;
	unsigned int	append;

	ldes = 0;
	lsrc = 0;
	while (dest[ldes] != '\0')
		ldes++;
	while (src[lsrc] != '\0')
		lsrc++;
	if (size <= ldes)
		return (lsrc + size);
	size -= ldes;
	append = 0;
	while (++append < size && *src != '\0')
	{
		dest[ldes++] = *src++;
	}
	dest[ldes++] = '\0';
	return (ldes + lsrc - append);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char dest[30] = "abcdefg";
	char src[] = "123";
	int rst = ft_strlcat(dest, src, 7);
	printf("len: %d\n", 8);
	printf("dest: %s\n", dest);
	printf("rst: %d\n\n", rst);
	char dest2[30] = "abcdefg";
	rst = ft_strlcat(dest2, src, 9);
	printf("len: %d\n", 9);
	printf("dest2: %s\n", dest2);
	printf("rst: %d\n\n", rst);
	char dest3[30] = "abcdefg";
	rst = ft_strlcat(dest3, src, 11);
	printf("len: %d\n", 11);
	printf("dest3: %s\n", dest3);
	printf("rst: %d\n\n", rst);
	char dest4[30] = "abcdefg";
	rst = ft_strlcat(dest4, src, 1);
	printf("len: %d\n", 1);
	printf("dest4: %s\n", dest4);
	printf("rst: %d\n\n", rst);
	char dest5[30] = "abcdefg";
	rst = ft_strlcat(dest5, src, 2);
	printf("len: %d\n", 2);
	printf("dest5: %s\n", dest5);
	printf("rst: %d\n\n", rst);
	char dest6[30] = "abcdefg";
	rst = ft_strlcat(dest6, src, 7);
	printf("len: %d\n", 7);
	printf("dest6: %s\n", dest6);
	printf("rst: %d\n\n", rst);
}
*/

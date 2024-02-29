/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:21:58 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/04 15:26:28 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	if (*src == '\0')
		return (dest);
	tmp = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}

/*
#include <stdio.h>
int	main(void)
{
	char dest[20] = "abcf";
	char src[] = "789";
	char *dest2 = ft_strcat(dest, src);
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
*/

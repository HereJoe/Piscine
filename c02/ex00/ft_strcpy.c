/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:54:17 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 10:56:42 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <assert.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *src = "hello";
	char dest[30];
	char dest2[6];
	puts(strcpy(dest, src));
	puts(ft_strcpy(dest, src));
	puts(strcpy(dest2, src));
	puts(ft_strcpy(dest2, src));
	//char dest3[2];
	//puts(strcpy(dest3, src));
	//puts(ft_strcpy(dest3, src));
	return (0);
}
*/

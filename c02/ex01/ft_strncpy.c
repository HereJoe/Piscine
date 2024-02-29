/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:46:43 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 11:09:18 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*tmp;

	tmp = dest;
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (tmp);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *src = "hello";
	char dest1[] = "1234567890";
	int len = 3;
	puts(strncpy(dest1, src, len));
	puts(ft_strncpy(dest1, src, len));
	len = 5;
	puts(strncpy(dest1, src, len));
	puts(ft_strncpy(dest1, src, len));
	len = 6;
	puts(strncpy(dest1, src, len));
	puts(ft_strncpy(dest1, src, len));
	return (0);
}
*/

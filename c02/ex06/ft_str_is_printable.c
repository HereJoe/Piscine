/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 11:20:10 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str > 126 || *str < 32)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char str;
	str	= ' ';
	write(1, &(char){ft_str_is_printable(&str)+'0'}, 1);
	str	= '~';
	write(1, &(char){ft_str_is_printable(&str)+'0'}, 1);
	str	= 127;
	write(1, &(char){ft_str_is_printable(&str)+'0'}, 1);
	str	= 31;
	write(1, &(char){ft_str_is_printable(&str)+'0'}, 1);
	str	= '\n';
	write(1, &(char){ft_str_is_printable(&str)+'0'}, 1);
	return (0);
}
*/

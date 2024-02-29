/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 11:18:54 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str > 'Z' || *str < 'A')
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
	str	= 'a';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= 'z';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= 'A';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= 'Z';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= '\n';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= ' ';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= '!';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	str	= '?';
	write(1, &(char){ft_str_is_uppercase(&str)+'0'}, 1);
	return (0);
}
*/

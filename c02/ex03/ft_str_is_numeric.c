/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 11:15:29 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str > '9' || *str < '0')
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
	str	= 47;
	write(1, &(char){ft_str_is_numeric(&str)+'0'}, 1);
	str	= 48;
	write(1, &(char){ft_str_is_numeric(&str)+'0'}, 1);
	str	= 57;
	write(1, &(char){ft_str_is_numeric(&str)+'0'}, 1);
	str	= 58;
	write(1, &(char){ft_str_is_numeric(&str)+'0'}, 1);
	return (0);
}
*/

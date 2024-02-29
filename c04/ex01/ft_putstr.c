/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:33:22 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 17:50:25 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*msg;

	if (str == NULL)
	{
		msg = "(null)\n";
		write(1, msg, 7);
		return ;
	}
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char* str = NULL;
	puts(str);
	ft_putstr(str);
	str = "";
	puts(str);
	ft_putstr(str);
	str = "abcd";
	puts(str);
	ft_putstr(str);
}
*/

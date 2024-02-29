/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:37:43 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 21:10:22 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

/*
int	main(void)
{
	char	*str;

	str = "hello, world!";
	ft_putstr(str);
	return (0);
}
*/

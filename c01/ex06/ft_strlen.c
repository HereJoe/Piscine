/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:48:14 by zhyang            #+#    #+#             */
/*   Updated: 2024/01/31 21:02:22 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

/*
void	print_n(int n)
{
	if (n / 10 > 0)
	{
		print_n(n / 10);
	}
	write(1, &(char){n % 10 + '0'}, 1);
}

int	main(void)
{
	char	*str;
	int		count;

	str = "hello, world!";
	count = ft_strlen(str);
	print_n(count);
	return (0);
}
*/

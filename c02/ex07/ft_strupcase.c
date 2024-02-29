/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 11:25:07 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "AbCdEf";
	write(1, str, 6);
	char* strn = ft_strupcase(str);
	write(1, &(char){'\n'}, 1);
	write(1, strn, 6);
	return (0);
}
*/

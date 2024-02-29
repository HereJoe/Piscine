/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:46:43 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 18:30:03 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_x(char *str)
{
	int	mod;

	write(1, &(char){'\\'}, 1);
	write(1, &(char){*str / 16 + '0'}, 1);
	mod = *str % 16;
	if (mod < 10)
		write(1, &(char){'0' + mod}, 1);
	else
		write(1, &(char){'a' + (mod - 10)}, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			print_x(str);
		str++;
	}
}
/*
int	main(void)
{
	char	*str = "Coucou\ntu vas bien ?";
	char	*show = "Coucou\\ntu vas bien ?";
	write(1, show, 35);
	write(1, &(char){'\n'}, 1);
	ft_putstr_non_printable(str);
	return (0);
}
*/

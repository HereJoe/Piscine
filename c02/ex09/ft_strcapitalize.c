/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:30:57 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 12:51:44 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	deal_letter(char *str, int *has_leading)
{
	if (*str >= 'a' && *str <= 'z')
	{
		if (*has_leading == 0)
		{
			*str -= 32;
			*has_leading = 1;
		}
		return (1);
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		if (*has_leading == 1)
			*str += 32;
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	int		has_leading;

	tmp = str;
	has_leading = 0;
	while (*str != '\0')
	{
		if (deal_letter(str, &has_leading) == 0)
		{
			if (*str >= '0' && *str <= '9')
				has_leading = 1;
			else
				has_leading = 0;
		}
		str++;
	}
	return (tmp);
}
/*
int main(void)
{
	char str[] = "sAlut, commenT tu vas ? 42mots quarante-deux; cinquante+et+un";
	write(1, str, 65);
	write(1, &(char){'\n'}, 1);
	char* strn = ft_strcapitalize(str);
	write(1, str, 65);
	write(1, &(char){'\n'}, 1);
	write(1, strn, 65);
	return (0);
}
*/

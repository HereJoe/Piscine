/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:16:40 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/14 20:16:42 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	size;
	int	i;
	int	j;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		size++;
	}
	if (size < 2)
		return (0);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (size);
}

char	*get_signal(char *str, int *signal)
{
	*signal = 1;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v'\
		|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			*signal *= -1;
	}
	return (str);
}

int	calc_dest_len(int digit, int b_size, int signal)
{
	int	dest_size;

	dest_size = 2;
	while (digit >= b_size)
	{
		digit /= b_size;
		dest_size++;
	}
	if (signal == -1)
		dest_size ++;
	return (dest_size);
}

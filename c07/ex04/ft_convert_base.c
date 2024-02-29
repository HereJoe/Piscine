/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 00:52:52 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/13 19:09:15 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int		check_base(char *base);
char	*get_signal(char *str, int *signal);
int		calc_dest_len(int digit, int b_size, int signal);

int	base_2_digital_nn(char *str, char *base, int size)
{
	int	ind;
	int	rst;

	rst = 0;
	while (*str != '\0')
	{
		ind = 0;
		while (base[ind] != '\0')
		{
			if (base[ind] == *str)
			{
				rst = rst * size + ind;
				break ;
			}
			ind++;
		}
		if (base[ind] == '\0')
			break ;
		str++;
	}
	return (rst);
}

void	digital_2_base_nn(int digit, char *dest, char *base, int bd_size[])
{
	int	b_size;
	int	d_size;
	int	i;

	b_size = bd_size[0];
	d_size = bd_size[1];
	i = 0;
	while (digit >= b_size)
	{
		dest[d_size - 2 - (i++)] = base[digit % b_size];
		digit /= b_size;
	}
	dest[d_size - 2 - i] = base[digit];
	dest[d_size -1] = '\0';
}

char	*create_dest(int digit, char *base_to, int signal, int base_size_to)
{
	char	*dest;
	int		dest_size;

	dest_size = calc_dest_len(digit, base_size_to, signal);
	dest = (char *)malloc(dest_size);
	if (dest == NULL)
		return (NULL);
	if (signal == -1)
		dest[0] = '-';
	digital_2_base_nn(digit, dest, base_to, (int []){base_size_to, dest_size});
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_size_fr;
	int		base_size_to;
	int		digit;
	int		signal;

	base_size_fr = check_base(base_from);
	base_size_to = check_base(base_to);
	if (base_size_fr == 0 || base_size_to == 0)
		return (0);
	nbr = get_signal(nbr, &signal);
	digit = base_2_digital_nn(nbr, base_from, base_size_fr);
	return (create_dest(digit, base_to, signal, base_size_to));
}

/*
#include <stdio.h>
void test(char *str, char *base_from, char *base_to)
{
	char *dest = ft_convert_base(str, base_from, base_to);
	printf("str:%s\nbase_from:%s\nbase_to:%s\ndest:%s\n",\
	 str, base_from, base_to, dest);
	 free(dest);
}
#include <stdio.h>
int	main(void)
{
//	test("-++5ab3", "0123456789", "ABC");
	// puts("\nnbr:5, base:01");
	test("   ++--5a34", "0123456789", "01");
	// puts("\nnbr:-1859, base:01234567AB");
	// ft_atoi_base("   -----1859d11", "01234567AB");
	// puts("\nnbr:5, base:010C");
	// ft_atoi_base("5", "010");
	// puts("\nnbr:5, base:1");
	// ft_atoi_base("5", "1");
	// puts("\nnbr:5, base:");
	// ft_atoi_base("5", "");
}
*/
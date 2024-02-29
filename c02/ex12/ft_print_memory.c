/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:37:22 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/08 18:37:29 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

char			g_sep_colon = ':';
char			g_sep_space = ' ';
char			g_sep_line = '\n';
unsigned int	g_char_each_line = 16;
int				g_base = 16;

void	print_hex_num(int n)
{
	if (n > 9)
	{
		write(1, &(char){'a' + (n - 10)}, 1);
	}
	else
	{
		write(1, &(char){'0' + n}, 1);
	}
}

void	print_char_hex(char c)
{
	int	devide;
	int	mod;

	devide = c / 16;
	mod = c % 16;
	print_hex_num(devide);
	print_hex_num(mod);
}

void	print_addr(int addr, int bits)
{
	bits --;
	if (addr > g_base - 1)
	{
		print_addr(addr / g_base, bits);
	}
	else
	{
		while (bits > 0)
		{
			write(1, &(char){'0'}, 1);
			bits--;
		}
	}
	print_hex_num(addr % g_base);
}

void	print_line(char *addr, unsigned int size)
{
	unsigned int	i;

	print_addr((int)addr, g_base);
	write(1, &g_sep_colon, 1);
	i = 0;
	while (i < size)
	{
		if (i % 2 == 0)
			write(1, &g_sep_space, 1);
		print_char_hex(addr[i++]);
	}
	i = i / 2 * 5 + i % 2 * 3;
	i = g_char_each_line / 2 * 5 + g_char_each_line % 2 * 3 - i;
	while (i-- > 0)
		write(1, &g_sep_space, 1);
	write(1, &g_sep_space, 1);
	i = 0;
	while (i < size)
	{
		write(1, addr + i++, 1);
	}
	write(1, &g_sep_line, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*tmp;
	int		line_num;
	int		line_max;

	tmp = addr;
	if (size == 0)
		return (tmp);
	line_max = size / g_char_each_line;
	line_num = 0;
	while (true)
	{
		if ((line_num + 1) * g_char_each_line < size)
			print_line(addr + line_num * g_char_each_line, g_char_each_line);
		else
		{
			print_line(addr + line_num * g_char_each_line, \
					size - line_num * g_char_each_line);
			break ;
		}
		line_num++;
	}
	return (tmp);
}
/*
#include <string.h>
int	main(void)
{
	char* str = "Bonjour les aminches...c. est fou.tout.ce qu on \
				 peut faire avec...print_memory....lol.lol. .";
	char* rst = ft_print_memory(str, strlen(str));
	puts(rst);
	return (0);
}
*/

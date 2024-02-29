/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:08:19 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/09 10:16:10 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 10

void	print_combine(char *combine)
{
	int	i;

	i = 0;
	while (i < N)
		write(1, &combine[i++], 1);
	write(1, &(char){'\n'}, 1);
}

//void	set_puzzle(int available[N][N], int row, int col, int old, int new)
void	set_puzzle(int available[N][N], int row, int col, int change[])
{
	int	i;

	i = 0;
	while (row + i < N)
	{
		if (available[row + i][col] == change[0])
			available[row + i][col] = change[1];
		if (col + i < N & available[row + i][col + i] == change[0])
			available[row + i][col + i] = change[1];
		if (col - i >= 0 && available[row + i][col - i] == change[0])
			available[row + i][col - i] = change[1];
		i++;
	}
}

int	queens_puzzle(int available[N][N], char *combine, int row)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < N)
	{
		if (available[row][i] == -1)
		{
			combine[row] = i + '0';
			if (row == N - 1)
			{
				print_combine(combine);
				count++;
			}
			else
			{
				set_puzzle(available, row, i, (int []){-1, i});
				count += queens_puzzle(available, combine, row + 1);
				set_puzzle(available, row, i, (int []){i, -1});
			}
		}
		i++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int		i;
	int		j;
	int		available[N][N];
	char	combine[N];

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
			available[i][j++] = -1;
		i++;
	}
	return (queens_puzzle(available, combine, 0));
}
/*
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
}
*/
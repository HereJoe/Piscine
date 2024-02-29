/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhughes <jhughes@student.42adel.or>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:37:23 by jhughes           #+#    #+#             */
/*   Updated: 2024/02/04 21:15:51 by jhughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

char	*generate_string(int size);

int	get_row_clue(char *str, int row, int direction, int n)
{
	int	count;
	int	max;
	int	column;
	int	target;

	column = n - 1;
	target = -1;
	if (direction == 1)
	{
		column = 0;
		target = n;
	}
	max = 0;
	count = 0;
	while (column != target)
	{
		if (str[row * n + column] > max)
		{
			count++;
			max = str[row * n + column];
		}
		column += direction;
	}
	return (count);
}

int	get_column_clue(char *str, int column, int direction, int n)
{
	int	count;
	int	max;
	int	row;
	int	target;

	row = n - 1;
	target = -1;
	if (direction == 1)
	{
		row = 0;
		target = n;
	}
	max = 0;
	count = 0;
	while (row != target)
	{
		if (str[row * n + column] > max)
		{
			count++;
			max = str[row * n + column];
		}
		row += direction;
	}
	return (count);
}

int	check_column(char *str, int column, int n)
{
	int	row;
	int	val;
	int	count;
	int	pos;

	val = 1;
	while (val <= n)
	{
		row = 0;
		count = 0;
		while (row < n)
		{
			pos = row * n + column;
			if (str[pos] == val + '0')
				count++;
			row++;
		}
		if (count != 1)
			return (0);
		val++;
	}
	return (1);
}

int	check_row(char *str, int row, int n)
{
	int	column;
	int	val;
	int	count;
	int	pos;

	val = 1;
	while (val <= n)
	{
		column = 0;
		count = 0;
		while (column < n)
		{
			pos = row * n + column;
			if (str[pos] == val + '0')
				count++;
			column++;
		}
		if (count != 1)
			return (0);
		val++;
	}
	return (1);
}

int	validate_solution(char *puzzle, char *solution, int n)
{
	char	*rule;
	int		i;
	int		valid;

	rule = generate_string(n * n);
	i = 0;
	valid = 0;
	while (i < n * n)
	{
		if (i < n)
		{
			valid += check_row(solution, i, n) + check_column(solution, i, n);
			rule[i] += get_column_clue(solution, i % n, 1, n);
		}
		else if (i < 2 * n)
			rule[i] += get_column_clue(solution, i % n, -1, n);
		else if (i < 3 * n)
			rule[i] += get_row_clue(solution, i % n, 1, n);
		else
			rule[i] += get_row_clue(solution, i % n, -1, n);
		i++;
	}
	return (valid == 2 * n && ft_strcmp(rule, puzzle) == 0);
}

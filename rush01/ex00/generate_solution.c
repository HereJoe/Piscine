/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhughes <jhughes@student.42adel.or>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:23:57 by jhughes           #+#    #+#             */
/*   Updated: 2024/02/06 13:41:35 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		validate_solution(char *puzzle, char *solution, int n);

char	*generate_string(int size);

char	**generate_combinations(int scope, int *len);

int	factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

int	increment(char *str, int *state, char **permutations, int n)
{
	int		i;
	int		j;

	i = 0;
	state[i]++;
	while (state[i] == factorial(n) && i < n)
	{
		state[i] = 0;
		i++;
		state[i]++;
	}
	if (i == n)
		return (-1);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			str[i * n + j] = permutations[state[i]][j];
			j++;
		}
		i++;
	}
	return (1);
}

int	generate_solution(char *puzzle, char *solution, int n)
{
	char	**permutations;
	int		*state;
	int		i;
	int		count;
	int		is_valid;

	permutations = generate_combinations(n, &i);
	state = malloc(4 * n);
	i = 0;
	while (i < n)
	{
		state[i] = 0;
		i++;
	}
	count = 0;
	while (increment(solution, state, permutations, n) == 1)
	{
		count++;
		is_valid = validate_solution(puzzle, solution, n);
		if (is_valid == 1)
			return (1);
	}
	return (-1);
}

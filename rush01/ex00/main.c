/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matalfor <matalfor@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:48:48 by matalfor          #+#    #+#             */
/*   Updated: 2024/02/03 15:09:00 by matalfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		verify_puzzle(char *puz, char *valid_puz, int n);

int		generate_solution(char *puzzle, char *solution, int n);

void	ft_putstr(char *str);

void	ft_putchar(char c);

// Allocates memory for string length size + 1, filled with the '0' character.
char	*generate_string(int size)
{
	char	*string;
	int		i;

	string = malloc(size + 1);
	i = 0;
	while (i < size)
	{
		string[i] = '0';
		i++;
	}
	string[i] = '\0';
	return (string);
}

void	display_solution(char *solution, int n)
{
	int	i;

	i = 0;
	while (i < n * n)
	{
		ft_putchar(solution[i]);
		if (i % n == n - 1)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	const int	n = 4;
	char		*valid_puz;
	char		*solution;

	valid_puz = generate_string(n * n);
	solution = generate_string(n * n);
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	else if (verify_puzzle(argv[1], valid_puz, n) == -1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	else if (generate_solution(valid_puz, solution, n) == -1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	else
		display_solution(solution, n);
	return (0);
}

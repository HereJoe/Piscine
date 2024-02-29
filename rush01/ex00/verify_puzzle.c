/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_puzzle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matalfor <matalfor@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:17:19 by matalfor          #+#    #+#             */
/*   Updated: 2024/02/04 20:02:27 by jhughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verify_puzzle(char *puz, char *valid_puz, int n)
{
	int	puzlen;
	int	i;

	puzlen = 0;
	i = 0;
	while (puz[i] != '\0')
	{
		if (puz[i] >= '1' && puz[i] <= n + '0')
		{
			valid_puz[puzlen] = puz[i];
			puzlen++;
		}
		else if (puz[i] != ' ')
			return (-1);
		i++;
	}
	if (puzlen > n * n || valid_puz[puzlen] == '0')
		return (-1);
	valid_puz[puzlen] = puz[i];
	return (0);
}

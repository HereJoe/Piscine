/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:07:09 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 15:07:10 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	op_add(long a, long b)
{
	return (a + b);
}

long	op_sub(long a, long b)
{
	return (a - b);
}

long	op_mul(long a, long b)
{
	return (a * b);
}

long	op_div(long a, long b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

long	op_mod(long a, long b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

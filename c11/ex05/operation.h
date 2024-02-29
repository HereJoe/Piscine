/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:07:53 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/18 15:07:54 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

typedef long	(*t_operation)(long, long);
long	op_add(long a, long b);
long	op_sub(long a, long b);
long	op_mul(long a, long b);
long	op_div(long a, long b);
long	op_mod(long a, long b);
#endif

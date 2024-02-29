/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:50:35 by zhyang            #+#    #+#             */
/*   Updated: 2024/02/14 20:50:36 by zhyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(n) \
    ({ \
        int result; \
        if (n >= 0) { \
            result = n; \
        } else { \
            result = -n; \
        } \
        result; \
    })
#endif

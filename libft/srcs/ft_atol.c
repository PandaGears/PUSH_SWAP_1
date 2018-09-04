/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:14:40 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/04 09:23:47 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long long	ft_atol(const char *str)
{
	long long	res;
	long		sign;

	res = 0;
	sign = 1;
	if (str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
				|| *str == '\f' || *str == '\v')
			str++;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str == '+')
			str++;
		while (ft_isdigit(*str))
		{
			res += *str++ - '0';
			if (ft_isdigit(*str))
				res = res * 10;
		}
	}
	return (res * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:58:41 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/13 17:59:08 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isnum(char *str)
{
	int		index;
	int		len;
	char	*num;

	num = ft_itoa(ft_atoi(str));
	index = 0;
	len = ft_strlen(str);
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] && ft_isdigit(str[index]))
		index++;
	if (index == len)
	{
		len = ft_strequ(num, str);
		free(num);
		return (len);
	}
	free(num);
	return (0);
}

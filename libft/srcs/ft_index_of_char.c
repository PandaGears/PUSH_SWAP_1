/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_of_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:42:07 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:42:49 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_index_of_char(const char *str, char c)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			break ;
		index++;
	}
	return (index);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_conchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:42:13 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:42:39 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_dup_conchar(const char *str, char c)
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = NULL;
	if (ft_conchar(str, c))
	{
		i = ft_index_of_char(str, c);
		fresh = ft_strndup(str, i);
	}
	return (fresh);
}

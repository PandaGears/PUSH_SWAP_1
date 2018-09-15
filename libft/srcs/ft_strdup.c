/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:41:25 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:36:12 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		index;

	dest = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (!dest)
		return (dest);
	index = 0;
	while (s1[index] != '\0')
	{
		dest[index] = s1[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

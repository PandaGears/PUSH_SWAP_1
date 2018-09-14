/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:41:25 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/12 18:25:02 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * (int)(ft_strlen(s1) + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s1))
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

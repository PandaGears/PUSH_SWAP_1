/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:49:52 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:51:19 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strndup(const char *src, size_t i)
{
	char	*str;

	if (!src)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str = ft_strncpy(str, src, i);
	str[i] = '\0';
	return (str);
}

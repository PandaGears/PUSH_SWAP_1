/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 12:54:05 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/12 15:14:16 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	char	*mem_start;

	mem = (char*)malloc(sizeof(char) * size);
	if (mem == NULL)
		return (mem);
	mem_start = mem;
	while (size--)
	{
		*mem = '\0';
		mem++;
	}
	return (mem_start);
}

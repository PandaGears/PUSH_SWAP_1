/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 07:41:24 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/18 07:52:24 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_list_len(t_list *begin_list)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = begin_list->head;
	if (tmp)
	{
		while (tmp)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:11:59 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 07:12:13 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_remove_if(t_list **begin_list, void *content_ref, int (*cmp)())
{
	t_list	*to_free;

	if (*begin_list)
	{
		if (cmp((*begin_list)->content, content_ref) == 0)
		{
			to_free = *begin_list;
			*begin_list = (*begin_list)->next;
			free(to_free);
			ft_list_remove_if(begin_list, content_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, content_ref, cmp);
	}
}

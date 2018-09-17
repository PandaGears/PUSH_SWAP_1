/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:41:33 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/17 14:57:20 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_list_append(t_list *lst, int value)
{
	t_node	*node;

	if (lst != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = value;
			node->next = NULL;
			if (lst->tail == NULL)
			{
				node->prev = NULL;
				lst->head = node;
				lst->tail = node;
			}
			else
			{
				node->prev = lst->tail;
				lst->tail->next = node;
				lst->tail = node;
			}
			lst->len++;
		}
	}
	return (lst);
}

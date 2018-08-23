/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_prepend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:59:21 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 06:59:27 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_list_prepend(t_list *lst, int value)
{
	t_node	*node;

	if (lst != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = value;
			node->prev = NULL;
			if (lst->head == NULL)
			{
				node->next = NULL;
				lst->head = node;
				lst->tail = node;
			}
			else
			{
				lst->head->prev = node;
				node->next = lst->head;
				lst->head = node;
			}
			lst->len++;
		}
	}
	return (lst);
}

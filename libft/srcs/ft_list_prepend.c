/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_prepend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:26:12 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/07 17:20:46 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

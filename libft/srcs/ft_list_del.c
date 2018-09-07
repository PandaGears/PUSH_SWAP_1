/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:25:29 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/07 17:36:31 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_list_del(t_list *lst, t_node *node)
{
	if (node->next == NULL && node->prev == NULL)
	{
		lst->head = NULL;
		lst->tail = NULL;
	}
	else if (node->prev == NULL)
	{
		lst->head = node->next;
		lst->head->prev = NULL;
	}
	else if (node->next == NULL)
	{
		lst->tail = node->prev;
		lst->tail->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
	lst->len--;
	return (lst);
}

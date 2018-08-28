/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:47:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/28 08:55:30 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			is_sort(t_list *l_a, t_list *l_b)
{
	t_node	*node;

	node = l_a->head;
	if (l_a->head->data == l_a->tail->data)
		if (l_b == NULL)
			return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	if (l_b->head != NULL)
		return (0);
	else
		return (1);
}

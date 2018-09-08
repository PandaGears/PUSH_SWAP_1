/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tool_identifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:10:02 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/08 17:37:06 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_maximum(t_list *lst)
{
	t_node	*maxim;
	int		max;

	maxim = lst->head;
	max = lst->head->data;
	while (maxim != NULL)
	{
		if (maxim->data < max)
			max = maxim->data;
		maxim = maxim->next;
	}
	return (max);
}

int	is_minimum(t_list *lst)
{
	t_node	*node;
	int		minim;

	node = lst->head;
	minim = lst->head->data;
	while (node != NULL)
	{
		if (node->data < minim)
			minim = node->data;
		node = node->next;
	}
	return (minim);
}

int	is_smallest_pos(t_list *lst)
{
	t_node	*node;
	int		smallest;
	int		smallest_pos;

	smallest = is_minimum(lst);
	node = lst->head;
	smallest_pos = 0;
	while (node->data != smallest)
	{
		node = node->next;
		smallest_pos++;
	}
	return (smallest_pos);
}

int	is_biggest_pos(t_list *lst)
{
	t_node	*node;
	int		biggest;
	int		biggest_pos;

	node = lst->head;
	biggest = lst->head->data;
	biggest_pos = 1;
	while (node != NULL)
	{
		biggest = node->data;
		biggest_pos++;
	}
	return (biggest_pos);
}

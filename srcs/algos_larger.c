/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_larger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:40:33 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/08 17:40:34 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_val_limit(int len, int smallest, t_list *list)
{
	int		fifth;
	int		val_limit;
	t_node	*node;
	int		current_smallest;
	int		count;

	fifth = fifth_list(len);
	node = list->head;
	count = 0;
	while (count <= fifth)
	{
		current_smallest = list->head->data;
		while (node != NULL)
		{
			if (node->data < current_smallest && node->data > smallest)
			{
				current_smallest = node->data;
			}
			node = node->next;
		}
		smallest = current_smallest;
		count++;
	}
	val_limit = smallest;
	return (val_limit);
}

void	smallest_first_fifth(int len, t_list *l_a, t_list *l_b)
{
	int		smallest;
	int		val_limit;
	int		smallest_pos;
	int		count;

	count = 0;
	smallest = is_minimum(l_a);
	smallest_pos = is_smallest_pos(l_a);
	val_limit = l_a->head->data;
	val_limit = find_val_limit(len, smallest, l_a);
	while (smallest <= val_limit)
	{
		move_up_a(smallest, len, smallest_pos, l_a);
		pb_print(l_a, l_b);
		smallest = is_minimum(l_a);
		smallest_pos = is_smallest_pos(l_a);
		count++;
		if (count >= val_limit)
			break ;
	}
}

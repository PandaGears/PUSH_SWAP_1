/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:12:43 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 16:11:26 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		lesser(int len, t_list *l_a, t_list *l_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0)
	{
		pa_print(l_a, l_b);
		len2--;
	}
}

void		midder(int len, t_list *l_a, t_list *l_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		if (is_sorted_list_a(l_a))
			break ;
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0)
	{
		while (l_b->head != NULL)
			pa_print(l_a, l_b);
		len2--;
	}
}

void		greater(int len, t_list *l_a, t_list *l_b)
{
	int		len2;
	int		len3;

	len3 = (len / 5) * 4;
	len2 = 0;
	while (len > len3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		if (is_sorted_list_a(l_a))
			break ;
		len--;
		len2++;
	}
	midder(len, l_a, l_b);
	while (len2 != 0)
	{
		while (l_b->head != NULL)
			pa_print(l_a, l_b);
		len2--;
	}
}

void		l_b_sort(t_list *l_b)
{
	t_node	*node;
	int		i;
	int		len;
	int		tmp;

	len = find_list_length(l_b);
	while (1)
	{
		tmp = len;
		i = 0;
		node = l_b->head;
		while (node->next && node->data > node->next->data && --tmp)
			node = node->next;
		if (node->next)
		{
			while (i++ > tmp)
				rb_print(l_b);
			sb_print(l_b);
			while (tmp++)
				rrb_print(l_b);
		}
		else
			break ;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:47:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/28 08:22:30 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		push_swap(t_list *l_a, t_list *l_b)
{
	if (is_sort(l_a, l_b))
		return ;
	while (l_a->head != NULL)
	{
		if (is_sort(l_a, l_b) && !is_sort(l_b, l_a))
			break ;
		smallest_first(l_a);
		if (is_sort(l_a, l_b))
			break ;
		if (is_sort(l_a, l_b) && !is_sort(l_b, l_a))
			break ;
		pb(l_a, l_b);
		if (is_sort(l_a, l_b) && !is_sort(l_b, l_a))
			break ;
	}
	while (l_b->head != NULL)
	{
		if (l_b->head == NULL)
		{
			pa(l_a, l_b);
		}
		else
			pa(l_a, l_b);
	}
}

void		backwards_lists_4(t_list *l_a, t_list *l_b)
{
	if (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data > l_a->head->next->next->data && \
			l_a->tail->data < l_a->head->next->next->data)
	{
		sa(l_a);
		rra(l_a);
		rra(l_a);
		sa(l_a);
	}
	else
		push_swap(l_a, l_b);
}

void		backwards_lists_5(t_list *l_a, t_list *l_b)
{
	if (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data > l_a->head->next->next->data && \
			l_a->head->next->next->data > l_a->head->next->next->next->data && \
			l_a->tail->data < l_a->head->next->next->next->data)
	{
		pb(l_a, l_b);
		pb(l_a, l_b);
		ss(l_a, l_b);
		rra(l_a);
		pa(l_a, l_b);
		pa(l_a, l_b);
		ra(l_a);
		ra(l_a);
	}
	else
		push_swap(l_a, l_b);
}

void		back_wards_lists_3(t_list *l_a, t_list *l_b)
{
	if (l_a->head->data > l_a->head->next->data && \
			l_a->tail->data < l_a->head->next->data)
	{
		sa(l_a);
		rra(l_a);
	}
	else
		push_swap(l_a, l_b);
}

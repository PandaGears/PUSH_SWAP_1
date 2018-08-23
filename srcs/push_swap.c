/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:47:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/16 11:08:22 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



void		push_swap(t_list *l_a, t_list *l_b)
{
	if (is_sort(l_a))
		return ;
	while (l_a->head != NULL)
	{
		if (is_sort(l_a) && !is_sort(l_b))
			break ;
		smallest_first(l_a);
		if (is_sort(l_a))
			break ;
		if (is_sort(l_a) && !is_sort(l_b))
			break ;
		pb(l_a, l_b);
		if (is_sort(l_a) && !is_sort(l_b))
			break ;
	}
	while (l_b->head != NULL)
	{
		if (l_b->head == NULL)
		{
			pa(l_a, l_b);
			ft_putchar('\n');
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
		l_a->head->next->next->data > l_a->tail->prev->data && \
		l_a->tail->data < l_a->tail->prev->data)
		{
			sa(l_a);
			rra(l_a);
			rra(l_a);
			sa(l_a);
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
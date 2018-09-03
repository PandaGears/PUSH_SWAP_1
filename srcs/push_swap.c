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

void		list_4(t_list *l_a)
{	
		if  (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data > l_a->head->next->next->data && \
			l_a->tail->data < l_a->head->next->next->data)
	{
		sa_print(l_a);
		rra_print(l_a);
		rra_print(l_a);
		sa_print(l_a);
	}
	else
		sa_print(l_a);
}

void		list_5(t_list *l_a, t_list *l_b)
{
	if  (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data > l_a->head->next->next->data && \
			l_a->head->next->next->data > l_a->head->next->next->next->data && \
			l_a->tail->data < l_a->head->next->next->next->data)
	{
		pb_print(l_a, l_b);
		pb_print(l_a, l_b);
		ss_print(l_a, l_b);
		rra_print(l_a);
		pa_print(l_a, l_b);
		pa_print(l_a, l_b);
		ra_print(l_a);
		ra_print(l_a);
	}
}

void		list_3(t_list *l_a, t_list *l_b)
{
	if (l_a->head->data > l_a->head->next->data)
		sa_print(l_a);
	if(!is_sort(l_a, l_b))
		rra_print(l_a);
}

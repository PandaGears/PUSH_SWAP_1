/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:40:16 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/03 14:59:10 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		quicksort(t_list *l_a, t_list *l_b)
{
	t_node	*tmp;

	while (!is_sort(l_a, l_b))
	{
		l_a->pivot = choose_pivot(l_a);
		while (l_a->head->data < l_a->pivot)
			pb_opt(l_a, l_b);
		while (1)
		{
			tmp = l_a->head;
			while (tmp && tmp->data >= l_a->pivot)
				tmp = tmp->next;
			if (!tmp)
				break ;
			while (l_a->head->data < l_a->pivot)
				pb_opt(l_a, l_b);
			if (l_a->head->next && l_a->head->data > l_a->head->next->data \
				&& l_a->tail->data > l_a->pivot)
				sa_print(l_a);
			(!is_sort(l_a, l_b)) ? ra_print(l_a) : 0;
		}
	}
	order_opt(l_b);
	while (l_b->head)
		pa_print(l_a, l_b);
}

void	l_a_sort(t_list *lst)
{
	t_node	*node;
	int		i;
	int		tmp;

	while (1)
	{
		tmp = 0;
		i = 0;
		node = lst->head;
		while (node->next && node->data < node->next->data && ++tmp)
			node = node->next;
		if (node->next)
		{
			while (i++ < tmp)
				ra_print(lst);
			sa_print(lst);
			while (tmp--)
				rra_print(lst);
		}
		else
			break ;
	}
}

void    front_sort(t_list *l_a, t_list *l_b)
{
	while (!is_sort(l_a, l_b))
	{
		while (l_a->head->next && l_a->head->data < l_a->head->next->data)
			pb_print(l_a, l_b);
		sa_print(l_a);
		if (l_b->head && 
        l_b->head->data > l_a->head->data)
		{
			ra_print(l_a);
			while (l_b->head && l_b->head->data > l_a->tail->data)
				pa_print(l_a, l_b);
                rra_print(l_a);
		}
	}
	while (l_b->head)
		pa_print(l_a, l_b);
}

void	back_sort2(t_list *l_a, t_list *l_b)
{
	if (l_a->head->data > l_a->head->next->data)
		sa_print(l_a);
	if (l_b->head && l_b->head->data > l_a->head->data)
	{
		ra_print(l_a);
		while (l_b->head && l_b->head->data > l_a->tail->data)
			pa_print(l_a, l_b);
		rra_print(l_a);
	}
}

void	back_sort(t_list *l_a, t_list *l_b)
{
	while (!is_sort(l_a, l_b))
	{
		while (l_a->head->data < l_a->tail->data)
		{
			back_sort2(l_a, l_b);
			pb_print(l_a, l_b);
		}
		while (l_a->tail->data < l_a->head->data)
		{
			while (l_b->head && l_b->head->data > l_a->tail->data)
				pa_print(l_a, l_b);
			rra_print(l_a);
			while (l_a->head->data < l_a->tail->data)
			{
				back_sort2(l_a, l_b);
				pb_print(l_a, l_b);
			}
		}
	}
	while (l_b->head)
		pa_print(l_a, l_b);
}
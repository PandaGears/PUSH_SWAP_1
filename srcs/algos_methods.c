/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:12:43 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/18 07:52:16 by tradlof          ###   ########.fr       */
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
		len--;
		len2++;
		if (is_sorted_list_a(l_a))
			break ;
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

	len2 = 0;
	while (len > 3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		len--;
		len2++;
		if (is_sorted_list_a(l_a))
			break ;
	}
	list_3(l_a);
	while (len2 != 0)
	{
		while (l_b->head != NULL)
			pa_print(l_a, l_b);
		len2--;
	}
}

void		greater_2(t_list *list_a, t_list *list_b)
{
	int		store;

	while (!(is_sorted_list_a(list_a)) || ft_list_len(list_b) != 0)
	{
		if (get_first(list_a) > get_second(list_a))
			sa_print(list_a);
		else if (get_first(list_a) > get_last(list_a))
			rra_print(list_a);
		else if (get_first(list_a) < get_last(list_b))
			pb_print(list_a, list_b);
		else if (get_first(list_a) < get_first(list_b))
		{
			store = get_first(list_a);
			ra_print(list_a);
			while (get_first(list_b) > store)
				pa_print(list_a, list_b);
			rra_print(list_a);
		}
		else if (is_sorted_list_a(list_a) && \
		get_first(list_a) > get_first(list_b) && get_first(list_b) != 0)
			move_list_b_to_a(list_a, list_b);
		else
			pb_print(list_a, list_b);
	}
}

void		move_list_b_to_a(t_list *la, t_list *lb)
{
	t_node *tmp;

	tmp = lb->head;
	if (tmp)
	{
		while (tmp)
		{
			pa_print(la, lb);
			tmp = tmp->next;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:46:47 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 06:47:12 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		is_list(t_list *lst)
{
	if (lst == NULL || lst->head == NULL || lst->head->next == NULL)
		return (0);
	return (1);
}

static void		swap(t_list *lst)
{
	t_node	*node;

	node = lst->head;
	lst->head = node->next;
	lst->head->prev = NULL;
	node->prev = lst->head;
	node->next = lst->head->next;
	lst->head->next = node;
	node->next->prev = node;
}

void			sa(t_list *lst)
{
	if (is_list(lst))
	{
		swap(lst);
	}
}

void			sb(t_list *lst)
{
	if (is_list(lst))
	{
		swap(lst);
	}
}

void			ss(t_list *l_a, t_list *l_b)
{
	if (is_list(l_a) && is_list(l_b))
	{
		swap(l_a);
		swap(l_b);
	}
}

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

void	ss(t_list *l_a, t_list *l_b)
{
	t_node	*node_a;
	t_node	*node_b;

	if (!(l_a == NULL || l_a->head == NULL || \
	l_a->head->next == NULL) && !(l_b == NULL || \
	l_b->head == NULL || l_b->head->next == NULL))
	{
		node_a = l_a->head;
		l_a->head = node_a->next;
		l_a->head->prev = NULL;
		node_a->prev = l_a->head;
		node_a->next = l_a->head->next;
		l_a->head->next = node_a;
		node_a->next->prev = node_a;
		node_b = l_b->head;
		l_b->head = node_b->next;
		l_b->head->prev = NULL;
		node_b->prev = l_b->head;
		node_b->next = l_b->head->next;
		l_b->head->next = node_b;
		node_b->next->prev = node_b;
	}
}

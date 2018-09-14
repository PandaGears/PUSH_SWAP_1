/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:46:33 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 15:55:26 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

int		is_sort(t_list *l_a, t_list *l_b)
{
	t_node	*node;
	if (l_a->head != NULL)
		node = l_a->head;
	else
		return (0);
	if (l_a->head->data == l_a->tail->data)
		if (l_b->head == NULL)
			return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	if (l_b->head != NULL)
		return (0);
	else
		return (1);
}

int		is_sorted_list(t_list *l_a)
{
	t_node	*node;

	node = l_a->head;
	if (l_a->head->data == l_a->tail->data)
		return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}

int		is_backwards_list(t_list *list_a)
{
	t_node	*current;

	current = list_a->head;
	while (current->data > current->next->data)
	{
		current = current->next;
		if (current == list_a->tail)
			return (1);
	}
	return (0);
}

int			check_largest_l(t_listdata *stack)
{
	t_list *head;
	t_list *head2;

	head = stack->lst;
	head2 = stack->lst->next;
	while (head2)
	{
		if (head->value < head2->value)
			return (0);
		else
			head2 = head2->next;
	}
	return (1);
}

int			is_backward_l(t_listdata *a)
{
	t_list *head;

	head = a->lst;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			head = head->next;
		else
			return (0);
	}
	return (1);
}

int			is_sorted_list_l(t_listdata *a)
{
	t_list *head;

	head = a->lst;
	while (head && head->next)
	{
		if ((head->value < head->next->value)
		&& (head->next->value - head->value == 1))
			head = head->next;
		else
		{
			if (is_backward_l(a))
				return (2);
			else
				return (0);
		}
	}
	return (1);
}

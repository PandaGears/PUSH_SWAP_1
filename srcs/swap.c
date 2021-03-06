/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:46:08 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 14:58:17 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_list(t_list *lst)
{
	if (lst != NULL && lst->head != NULL && lst->head->next != NULL)
		return (1);
	return (0);
}

void	swap(t_list *lst)
{
	t_node	*node;
	t_node	*current;

	node = lst->head;
	lst->head = node->next;
	lst->head->prev = NULL;
	node->prev = lst->head;
	node->next = lst->head->next;
	lst->head->next = node;
	current = lst->head;
	while (current->next != NULL)
	{
		current = current->next;
		if (current->next == NULL)
			lst->tail = current;
	}
}

void	sa(t_list *lst)
{
	if (is_list(lst))
		swap(lst);
}

void	sb(t_list *lst)
{
	if (is_list(lst))
		swap(lst);
}

void	ss(t_list *l_a, t_list *l_b)
{
	if (is_list(l_a) == 1)
		sa(l_a);
	if (is_list(l_b) == 1)
		sb(l_b);
}

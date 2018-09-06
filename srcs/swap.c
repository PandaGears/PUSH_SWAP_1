/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:46:47 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/05 17:00:59 by hrossouw         ###   ########.fr       */
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
	current = lst->head->next;
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
	if (l_a != NULL && l_a->head != NULL && l_a->head->next != NULL)
		sa(l_a);
	if (l_b != NULL && l_b->head != NULL && l_b->head->next != NULL)
		sb(l_b);
}

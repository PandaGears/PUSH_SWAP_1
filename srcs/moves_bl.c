/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:43:06 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 16:43:28 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		sb_l(t_listdata *b)
{
	t_list *temp;

	if (b->lst && b->lst->next)
	{
		temp = b->lst;
		b->lst = b->lst->next;
		temp->next = b->lst->next;
		b->lst->next = temp;
	}
	return ;
}

void		pb_l(t_listdata *a, t_listdata *b)
{
	t_list *temp;

	temp = a->lst;
	if (a->lst)
		a->lst = a->lst->next;
	else
		return ;
	temp->next = b->lst;
	b->lst = temp;
}

void		rb_l(t_listdata *b)
{
	t_list *temp;
	t_list *head;

	head = b->lst;
	temp = b->lst;
	if (b->lst && b->lst->next)
		b->lst = b->lst->next;
	else
		return ;
	if (temp->value > -2147483648)
	{
		while (head->next)
			head = head->next;
		head->next = temp;
		temp->next = NULL;
	}
}

void		rrb_l(t_listdata *b)
{
	t_list *head;
	t_list *temp;

	if (b->lst && b->lst->next)
	{
		head = b->lst;
		temp = b->lst;
	}
	else
		return ;
	if (temp->value > -2147483648)
	{
		while (head->next->next)
			head = head->next;
		b->lst = head->next;
		b->lst->next = temp;
		head->next = NULL;
	}
}

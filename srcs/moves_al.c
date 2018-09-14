/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_al.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:39:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 16:48:33 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		sa_l(t_listdata *a)
{
	t_list *temp;

	if (a->lst && a->lst->next)
	{
		temp = a->lst;
		a->lst = a->lst->next;
		temp->next = a->lst->next;
		a->lst->next = temp;
	}
	return ;
}

void		pa_l(t_listdata *a, t_listdata *b)
{
	t_list *temp;

	temp = b->lst;
	if (b->lst)
		b->lst = b->lst->next;
	else
		return ;
	temp->next = a->lst;
	a->lst = temp;
}

void		ra_l(t_listdata *a)
{
	t_list *temp;
	t_list *head;

	head = a->lst;
	temp = a->lst;
	if (a->lst && a->lst->next)
		a->lst = a->lst->next;
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

void		rra_l(t_listdata *a)
{
	t_list *head;
	t_list *temp;

	if (a->lst && a->lst->next)
	{
		head = a->lst;
		temp = a->lst;
	}
	else
		return ;
	if (temp->value > -2147483648)
	{
		while (head->next->next)
			head = head->next;
		a->lst = head->next;
		a->lst->next = temp;
		head->next = NULL;
	}
}

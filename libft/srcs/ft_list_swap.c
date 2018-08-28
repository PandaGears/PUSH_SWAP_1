/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:02:06 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/08 09:02:08 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	nodes_are_next(t_list *a, t_list *b)
{
	return ((a->next == b && b->prev == a) || (a->prev == b && b->next == a));
}

void		ft_list_swap(t_list *a, t_list *b)
{
	t_list	*tmp[4];

	tmp[0] = a->prev;
	tmp[1] = b->prev;
	tmp[2] = a->next;
	tmp[3] = b->next;
	if (nodes_are_next(a, b))
	{
		a->prev = tmp[2];
		b->prev = tmp[0];
		a->next = tmp[3];
		b->next = tmp[1];
	}
	else
	{
		a->prev = tmp[1];
		b->prev = tmp[0];
		a->next = tmp[3];
		b->next = tmp[2];
	}
	a->prev->next = a;
	a->next->prev = a;
	b->prev->next = b;
	b->next->prev = b;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:42:47 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/16 15:49:38 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		is_list(t_list *lst)
{
	if (lst == NULL || lst->head == NULL)
		return (0);
	return (1);
}

static void		push(t_list *l_a, t_list *l_b)
{
	ft_list_prepend(l_a, l_b->head->data);
	ft_list_del(l_b, l_b->head);
}

void			pa(t_list *l_a, t_list *l_b)
{
	if (is_list(l_b))
	{
		push(l_a, l_b);
		ft_putstr("pa\n");
	}
}

void			pb(t_list *l_a, t_list *l_b)
{
	if (is_list(l_a))
	{
		push(l_b, l_a);
		ft_putstr("pb\n");
	}
}

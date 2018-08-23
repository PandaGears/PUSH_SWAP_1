/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:43:05 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 06:45:45 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_list *lst)
{
	ft_list_append(lst, lst->head->data);
	ft_list_del(lst, lst->head);
}

void		ra(t_list *lst)
{
	rotate(lst);
	ft_putstr("ra");
	ft_putstr("\n");
}

void		rb(t_list *lst)
{
	rotate(lst);
	ft_putstr("rb");
	ft_putstr("\n");
}

void		rr(t_list *l_a, t_list *l_b)
{
	rotate(l_a);
	rotate(l_b);
	ft_putstr("rr");
	ft_putstr("\n");
}

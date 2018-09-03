/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:42:47 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/03 14:55:08 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list *l_a, t_list *l_b)
{
	if (!(l_b == NULL || l_b->head == NULL))
	{
		ft_list_prepend(l_a, l_b->head->data);
		ft_list_del(l_b, l_b->head);
	}
}

void	pb(t_list *l_a, t_list *l_b)
{
	if (!(l_a == NULL || l_a->head == NULL))
	{
		ft_list_prepend(l_b, l_a->head->data);
		ft_list_del(l_a, l_a->head);
	}
}

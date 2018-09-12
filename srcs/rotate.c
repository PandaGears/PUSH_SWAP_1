/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:46:06 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/12 14:46:17 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void		rotate(t_list *l_a)
{
	ft_list_append(l_a, HEADA);
	ft_list_del(l_a, l_a->head);
}

void		ra(t_list *lst)
{
	rotate(lst);
}

void		rb(t_list *lst)
{
	rotate(lst);
}

void		rr(t_list *l_a, t_list *l_b)
{
	rotate(l_a);
	rotate(l_b);
}

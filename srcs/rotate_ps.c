/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:46:03 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/12 14:46:17 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void	ra_print(t_list *l_a)
{
	ra(l_a);
	ft_putstr("ra\n");
}

void	rb_print(t_list *l_b)
{
	rb(l_b);
	ft_putstr("rb\n");
}

void	rra_print(t_list *l_a)
{
	rra(l_a);
	ft_putstr("rra\n");
}

void	rrb_print(t_list *l_b)
{
	rrb(l_b);
	ft_putstr("rrb\n");
}

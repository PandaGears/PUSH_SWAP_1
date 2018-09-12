/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:45:46 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/12 14:46:20 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void	pa_print(t_list *l_a, t_list *l_b)
{
	pa(l_a, l_b);
	ft_putstr("pa\n");
}

void	pb_print(t_list *l_a, t_list *l_b)
{
	pb(l_a, l_b);
	ft_putstr("pb\n");
}

void	sa_print(t_list *l_a)
{
	sa(l_a);
	ft_putstr("sa\n");
}

void	sb_print(t_list *l_b)
{
	sb(l_b);
	ft_putstr("sb\n");
}

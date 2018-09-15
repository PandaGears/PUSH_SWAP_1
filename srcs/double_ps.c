/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_ps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:54:39 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 14:59:18 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rr_print(t_list *l_a, t_list *l_b)
{
	rr(l_a, l_b);
	ft_putstr("rr\n");
}

void	ss_print(t_list *l_a, t_list *l_b)
{
	ss(l_a, l_b);
	ft_putstr("ss\n");
}

void	rrr_print(t_list *l_a, t_list *l_b)
{
	rrr(l_a, l_b);
	ft_putstr("rrr\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_instruct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 08:51:32 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/28 08:54:41 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		checker_p(const char *str, t_list *l_a, t_list *l_b)
{
	if (ft_strcmp("pa", str) == 0)
		pa(l_a, l_b);
	else if (ft_strcmp("pb", str) == 0)
		pb(l_a, l_b);
	else if (ft_strcmp("ss", str) == 0)
		ss(l_a, l_b);
	else if (ft_strcmp("rr", str) == 0)
		rr(l_a, l_b);
	else if (ft_strcmp("rrr", str) == 0)
		rrr(l_a, l_b);
	else if (ft_strcmp("sb", str) == 0)
		sb(l_a);
	else if (ft_strcmp("rb", str) == 0)
		rb(l_a);
	else if (ft_strcmp("rrb", str) == 0)
		rrb(l_a);
	else if (ft_strcmp("sa", str) == 0)
		sa(l_a);
	else if (ft_strcmp("ra", str) == 0)
		ra(l_a);
	else if (ft_strcmp("rra", str) == 0)
		rra(l_a);
	else
		error();
}

void		checker_r(t_list *l_a, t_list *l_b)
{
	char *str;

	while (get_next_line(0, &str))
		checker_p(str, l_a, l_b);
}

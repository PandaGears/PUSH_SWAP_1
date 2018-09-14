/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tool_identifier_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:33:53 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 16:52:22 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		rule(t_listdata *a, t_listdata *b, char *line)
{
	if (ft_strequ(line, "sa"))
		sa_l(a);
	else if (ft_strequ(line, "sb"))
		sb_l(b);
	else if (ft_strequ(line, "ss"))
		ss_l(a, b);
	else if (ft_strequ(line, "pa"))
		pa_l(a, b);
	else if (ft_strequ(line, "pb"))
		pb_l(a, b);
	else if (ft_strequ(line, "ra"))
		ra_l(a);
	else if (ft_strequ(line, "rb"))
		rb_l(b);
	else if (ft_strequ(line, "rr"))
		rr_l(a, b);
	else if (ft_strequ(line, "rra"))
		rra_l(a);
	else if (ft_strequ(line, "rrb"))
		rrb_l(b);
	else if (ft_strequ(line, "rrr"))
		rrr_l(a, b);
	else
		error();
}

int			lowest_num_l(t_listdata *list)
{
	t_list	*top;
	int		smallest;

	top = list->lst;
	smallest = top->value;
	while (top)
	{
		if (top->value < smallest)
			smallest = top->value;
		top = top->next;
	}
	return (smallest);
}

int			biggest_num_l(t_listdata *list)
{
	t_list	*top;
	int		biggest;

	top = list->lst;
	biggest = top->value;
	while (top)
	{
		if (top->value > biggest)
			biggest = top->value;
		top = top->next;
	}
	return (biggest);
}

int			biggest_under_l(t_listdata *list, int val)
{
	t_list	*top;
	int		biggest;

	top = list->lst;
	biggest = top->value;
	while (top)
	{
		if (top->value > biggest)
			if (top->value < val)
				biggest = top->value;
		top = top->next;
	}
	return (biggest);
}

int			bottom_l(t_listdata *list)
{
	t_list *top;

	top = list->lst;
	while (top->value)
		top = top->next;
	return (top->value);
}
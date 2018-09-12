/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_sets.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:12:46 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/11 16:15:01 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		list_2(t_list *l_a)
{
	if (HEADA > TAILA)
		sa_print(l_a);
}

void		list_3(t_list *l_a)
{
	if (HEADA < NEXTA)
	{
		rra_print(l_a);
		if (is_sorted_list(l_a) == 0)
			sa_print(l_a);
	}
	else if (HEADA > NEXTA)
	{
		if (HEADA > TAILA)
			ra_print(l_a);
		if (is_sorted_list(l_a) == 0)
			sa_print(l_a);
	}
	else
		sa_print(l_a);
}

void		list_4(int len, t_list *l_a, t_list *l_b)
{
	if (is_backwards_list(l_a) == 1)
	{
		sa_print(l_a);
		rra_print(l_a);
		rra_print(l_a);
		sa_print(l_a);
	}
	else
		lesser(len, l_a, l_b);
}

int			half_list(int len)
{
	int		div;

	if ((len % 2 == 0) && len != 0)
		div = len / 2;
	else
	{
		len = len + 1;
		div = len / 2;
	}
	return (div);
}

int			fifth_list(int len)
{
	int		div;

	div = 0;
	if ((len % 5 == 0) && len)
		div = len / 5;
	else
	{
		if (len % 5 < 3)
			div = len - (len % 5);
		else if (len % 5 >= 3)
			div = len + (5 - (len % 5));
	}
	return (div);
}

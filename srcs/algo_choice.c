/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_choice.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:40:39 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 09:12:46 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_backwards(int len, t_list *list_a, t_list *list_b)
{
	while (len > 3)
	{
		pb_print(list_a, list_b);
		len--;
	}
	sa_print(list_a);
	rra_print(list_a);
	while (list_b->head != NULL)
	{
		pa_print(list_a, list_b);
		ra_print(list_a);
	}
}

void	decisions(t_list *l_a, t_list *l_b)
{
	int		length;
	t_push	list_a;

	length = find_list_length(l_a);
	if ((is_backwards_list(l_a) == 1) && length > 2)
		algos_backwards(length, l_a, l_b);
	else if (length == 2)
		list_2(l_a);
	else if (length == 3)
		list_3(l_a);
	else if (length == 4)
		list_4(length, l_a, l_b);
	else if (length <= 10)
		lesser(length, l_a, l_b);
	else if (length <= 100)
		midder(length, l_a, l_b);
	else
		larger(length, l_a, l_b);
	free3(list_a.lst_a);
}

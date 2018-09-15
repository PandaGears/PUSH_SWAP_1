/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:12:43 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 14:01:24 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void		lesser(int len, t_list *l_a, t_list *l_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0)
	{
		pa_print(l_a, l_b);
		len2--;
	}
}

void		midder(int len, t_list *l_a, t_list *l_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		if (is_sorted_list(l_a))
			break ;
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0 && l_b != NULL)
	{
		pa_print(l_a, l_b);
		len2--;
	}
}

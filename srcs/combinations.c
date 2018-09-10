/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 08:07:57 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/10 16:29:47 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	combo_1a(t_list *lst)
{
	rra_print(lst);
	rra_print(lst);
}

void	combo_2a(t_list *lst)
{
	rra_print(lst);
	sa_print(lst);
}

void	half_path_a(int len, t_list *l_a, int pos, int size)
{
	int half;

	size = is_minimum(l_a);
	pos = is_smallest_pos(l_a);
	half = half_list(len);
	if (pos > half)
		rra_print(l_a);
	else if (pos <= half)
		ra_print(l_a);
			len++;
}
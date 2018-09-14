/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:13:36 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 07:53:53 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	smallest_first(int len, t_list *l_a)
{
	int		smallest;
	int		smallest_pos;

	smallest = is_minimum(l_a);
	smallest_pos = is_smallest_pos(l_a);
	move_up_a(smallest, len, smallest_pos, l_a);
}

void	move_up_a(int size, int len, int pos, t_list *l_a)
{
	int half;

	while (HEADA != size)
	{
		if (HEADA != size && TAILA == size)
			rra_print(l_a);
		else if (HEADA != size && NEXTA == size && NEXEXTA > HEADA)
			sa_print(l_a);
		else
		{
			while (HEADA != size)
			{
				half = half_list(len);
				if (pos > half)
					rra_print(l_a);
				else if (pos <= half)
					ra_print(l_a);
				len++;
			}
		}
	}
}

void	biggest_first(int len, t_list *list)
{
	t_node	*node;
	int		biggest; 
	int		biggest_pos;

	len = fifth_list(len);
	node = list->head;
	biggest = is_maximum(list);
	biggest_pos = is_biggest_pos(list);
	move_up_b(biggest, len, biggest_pos, list);
}

void	move_up_b(int size, int len, int pos, t_list *l_b)
{
	int half;

	while (HEADB != size)
	{
		if (HEADB != size && TAILB == size)
			rrb_print(l_b);
		else if (HEADB != size && NEXTB == size && NEXEXTB > HEADB)
			sb_print(l_b);
		else
		{
			half = half_list(len);
			if (pos > half)
				rrb_print(l_b);
			else if (pos <= half)
				rb_print(l_b);
			len++;
		}
	}
}

int		move(t_listdata *list, int val)
{
	int pos;

	pos = find_pos(list, val);
	return (pos > ft_list_size(list) / 2 ? ft_list_size(list) - pos : pos);
}
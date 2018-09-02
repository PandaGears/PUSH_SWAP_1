/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:40:16 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/28 09:01:44 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	bubble_sorter(t_list *lst, int size)
{
	int i;
	int j;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < size - (i + 1))
		{
			if (&lst[j] > &lst[j + 1])
				ft_list_swap(&lst[j], &lst[j + 1]);
		}
		j++;
	}
	i++;
}
void	smallest_first(t_list *lst)
{
	t_node	*node;
	int		tmp;

	tmp = lst->head->data;
	node = lst->head;
	while (node != NULL)
	{
		if (node->data < tmp)
			tmp = node->data;
		node = node->next;
	}
	while (lst->head->data != tmp)
	{
		if (lst->head->data != tmp && lst->tail->data == tmp)
			rra_print(lst);
		else if (lst->head->data != tmp && lst->head->next->data == tmp)
			sa_print(lst);
		else
			ra_print(lst);
	}
}

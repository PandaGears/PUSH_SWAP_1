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

void	bubble_sorter(int *a, int size)
{
	int i;
	int j;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < size - (i + 1))
		{
			if (a[j] > a[j + 1])
				ft_swap(&a[j], &a[j + 1]);
		}
		j++;
	}
	i++;
}

void	quicksorter(int *lst, int m, int n)
{
	int	key;
	int i;
	int j;
	int k;
	
	if (m < n)
	{
		k = ft_pivot(m, n);
		ft_swap(&lst[m], &lst[k]);
		key = lst[m];
		i = m + 1;
		j = n;
		while (i <= j)
		{
			while ((i <= n) && (lst[i] <= key))
				i++;
			while ((j >= m) && (lst[j] > key))
				j--;
			if(i < j)
				ft_swap(&lst[i], &lst[j]);
		}
		ft_swap(&lst[m], &lst[j]);
		quicksorter(lst, m, j - 1);
		quicksorter(lst, j + 1, n);
	}
}
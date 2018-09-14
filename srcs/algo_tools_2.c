/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:24:00 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 18:16:29 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_pos(t_listdata *list, int val)
{
	t_list	*top;
	int		i;

	i = 0;
	top = list->lst;
	while (top->value != val)
	{
		i++;
		top = top->next;
	}
	return (i);
}

void	free3(t_listdata *list)
{
	while (list->lst)
	{
		free(list->lst);
		list->lst = list->lst->next;
	}
	free(list->lst);
}

t_listdata	normalize(t_listdata *tmp, int size, t_listdata *a)
{
	t_list	*top;
	t_list	*node;
	t_list	*temp;
	int		i;
	int		j;

	i = 0;
	temp = tmp->lst;
	while (i++ < size)
	{
		j = 1;
		top = a->lst;
		node = a->lst;
		while (j++ < i)
			node = node->next;
		while (top)
		{
			if (top->value > node->value)
				temp->value--;
			top = top->next;
		}
		temp = temp->next;
	}
	free3(a);
	return (*tmp);
}

t_list		*new_node(int value)
{
	t_list *node;

	node = (t_list*)malloc(sizeof(t_list*));
	node->value = value;
	node->next = NULL;
	return (node);
}

void	push_list(t_listdata *list, int val)
{
	t_list *top;

	top = new_node(val);
	top->next = list->lst;
	list->lst = top;
	list->size = ft_list_size(list);
}

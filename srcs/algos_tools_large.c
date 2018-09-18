/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools_large.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 07:22:35 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/18 07:32:50 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		get_first(t_list *list)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = list->head;
	if (tmp)
		ret = tmp->data;
	return (ret);
}

int		get_second(t_list *list)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = list->head;
	if (tmp)
	{
		if (tmp->next != NULL)
		{
			ret = tmp->next->data;
		}
	}
	return (ret);
}

int		get_last(t_list *list)
{
	int		ret;
	t_node	*tmp;

	ret = 0;
	tmp = list->head;
	if (tmp)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		ret = tmp->data;
	}
	return (ret);
}

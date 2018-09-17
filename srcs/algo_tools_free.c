/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:10:19 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/17 18:10:22 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free3(t_list *list)
{
	t_node	*current;

	current = list->head;
	while (current->next)
	{
		free(current);
		current = current->next;
	}
	free(current);
}

void	free_double(t_list *l_a, t_list *l_b)
{
	free3(l_a);
	free3(l_b);
}

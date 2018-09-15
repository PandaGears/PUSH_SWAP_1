/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:24:00 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:51:36 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free3(t_list *list)
{
	while (list->data)
	{
		free(list->data);
		list->data = list->data->next;
	}
	free(list->data);
}

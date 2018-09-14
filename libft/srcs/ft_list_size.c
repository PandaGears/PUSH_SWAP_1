/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:14:10 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 07:54:23 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_list_size(t_listdata *list)
{
	t_list	*top;
	int		i;

	top = list->lst;
	i = 0;
	while (top)
	{
		i++;
		top = top->next;
	}
	return (i);
}

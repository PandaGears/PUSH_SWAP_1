/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:59:36 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 06:59:46 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_print_list(t_list *lst)
{
	t_node	*tmp;

	if (lst != NULL)
	{
		tmp = lst->head;
		while (tmp != NULL)
		{
			ft_putnbr(tmp->data);
			ft_putstr(" > ");
			tmp = tmp->next;
		}
	}
	ft_putstr("NULL\n");
}

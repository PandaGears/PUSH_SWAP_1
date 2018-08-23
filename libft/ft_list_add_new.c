/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:01:08 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/08 09:01:10 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_add_next(t_list *newer, t_list *dest)
{
	dest->next->prev = newer;
	newer->next = dest->next;
	newer->prev = dest;
	dest->next = newer;
}

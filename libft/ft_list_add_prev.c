/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_prev.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:01:16 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/08 09:01:17 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_add_prev(t_list *newer, t_list *dest)
{
	newer->prev = dest->prev;
	newer->next = dest;
	dest->prev->next = newer;
	dest->prev = newer;
}

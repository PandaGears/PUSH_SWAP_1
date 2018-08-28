/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_disconnect.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:01:22 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/08 09:01:24 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_list_disconnect(t_list *src)
{
	src->prev->next = src->next;
	src->next->prev = src->prev;
	src->next = src;
	src->prev = src;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_moveto_prev.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 09:01:58 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/08 09:02:00 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_moveto_prev(t_list *src, t_list *dest)
{
	ft_list_disconnect(src);
	ft_list_add_prev(src, dest);
}

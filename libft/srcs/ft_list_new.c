/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:59:08 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:17:50 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_list_new(void)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result != NULL)
	{
		result->len = 0;
		result->head = NULL;
		result->tail = NULL;
	}
	return (result);
}

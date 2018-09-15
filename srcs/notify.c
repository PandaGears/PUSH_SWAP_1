/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:46:30 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 12:59:37 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ok(void)
{
	ft_putstr(GRN"OK\n"NRM);
	exit(1);
}

void	error(void)
{
	ft_putstr(RED"Error\n"NRM);
	exit(1);
}

void	ko(void)
{
	ft_putstr(RED"KO\n"NRM);
	exit(1);
}

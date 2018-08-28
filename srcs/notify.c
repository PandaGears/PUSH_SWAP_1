/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 09:31:29 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/28 08:49:09 by tradlof          ###   ########.fr       */
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

void	show_usage(void)
{
	exit(1);
}

void	ko(void)
{
	ft_putstr(RED"KO\n"NRM);
	exit(1);
}

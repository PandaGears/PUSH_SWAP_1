/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:44:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/28 09:05:40 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	decisions(int length, t_list *l_a, t_list *l_b)
{
	length = length - 1;
	if (length == 5)
		list_5(l_a, l_b);
	else if (length == 4)
		list_4(l_a, l_b);
	else if (length == 3)
		list_3(l_a, l_b);
}

int		main(int argc, char **argv)
{
	t_list	*l_a;
	t_list	*l_b;

	error_checker(argc, argv);
	l_a = ft_list_new();
	l_b = ft_list_new();
	argv++;
	while (*argv)
	{
		l_a = ft_list_append(l_a, ft_atoi(*argv));
		argv++;
	}
	if (is_sort(l_a, l_b))
		return (0);
	else
		decisions(argc, l_a, l_b);
	if (is_sort(l_a, l_b))
		ok();
	else
		ko();
}


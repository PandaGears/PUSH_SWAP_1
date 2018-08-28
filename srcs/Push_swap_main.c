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

int		main(int argc, char **argv)
{
	t_list	*l_a;
	t_list	*l_b;

	error_checker(argc, argv);
	argv++;
	l_a = ft_list_new();
	l_b = ft_list_new();
	while (*argv)
	{
		l_a = ft_list_append(l_a, ft_atoi(*argv));
		argv++;
	}
	if (argc == 6)
		backwards_lists_5(l_a, l_b);
	else if (argc == 5)
		backwards_lists_4(l_a, l_b);
	else if (argc == 4)
		back_wards_lists_3(l_a, l_b);
	else
		push_swap(l_a, l_b);
	if (is_sort(l_a, l_b))
		ok();
	else
		ko();
	return (0);
}

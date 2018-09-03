/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:44:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/03 12:29:20 by hrossouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
		l_a = ft_list_append(l_a, ft_atol(*argv));
		// print_list(l_a, l_b);
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


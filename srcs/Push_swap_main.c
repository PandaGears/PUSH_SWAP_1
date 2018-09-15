/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:30:12 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 13:02:17 by tradlof          ###   ########.fr       */
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
		l_a = ft_list_append(l_a, ft_atoi(*argv));
		argv++;
	}
	if (is_sort(l_a, l_b))
	{
		free3(l_a);
		free3(l_b);
		exit(1);
	}
	else
		decisions(l_a, l_b);
}

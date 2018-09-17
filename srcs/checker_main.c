/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:44:15 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/17 18:01:26 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc > 1)
	{
		list_a = get_args(argc, argv);
		error_checker(argv, list_a);
		list_b = ft_list_new();
		checker_r(list_a, list_b);
		if (is_sort(list_a, list_b))
		{
			free3(list_a);
			ok();
		}
		else
			ko();
	}
	else
		exit(1);
}

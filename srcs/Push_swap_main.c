/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:30:12 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/17 18:01:56 by tradlof          ###   ########.fr       */
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
		if (is_sort(list_a, list_b))
			exit(1);
		else
			decisions(list_a, list_b);
	}
	else
		exit(1);
}

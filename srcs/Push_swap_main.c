/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:30:12 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/12 14:46:24 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*args;

	if (argc > 1)
	{
		error_checker(argc, argv);
		args = get_args(argc, argv);
		list_a = ft_list_new();
		list_b = ft_list_new();
		argv++;
		while (*argv)
		{
			list_a = ft_list_append(list_a, ft_atoi(*argv));
			argv++;
		}
		if (is_sort(list_a, list_b))
			exit(1);
		else
			decisions(list_a, list_b);
	}
	else
		exit(1);
}

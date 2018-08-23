/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:37:28 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/16 11:02:41 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*l_a;
	t_list	*l_b;
	error_official(argc, argv);
		argv++;
		l_a = ft_list_new();
	l_b = ft_list_new();
		while (*argv)
		{
			if (ft_atoi(*argv) > 2147483647 || ft_atoi(*argv) < -2147483647)
			{
				ft_putstr(RED"Error\n");
				exit(1);
			}
			l_a = ft_list_append(l_a, ft_atoi(*argv));
			argv++;
		}
		/*Set up instruction checker here*/
		if (is_sort(l_a))
			ok();
		else
			ko();
		return(0);
}
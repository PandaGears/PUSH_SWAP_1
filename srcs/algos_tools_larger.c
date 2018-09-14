/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_larger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:40:33 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 08:50:53 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		tmplist(t_listdata *tmp, int size)
{
	int i;

	i = 0;
	tmp->lst = NULL;
	while (++i < size)
		push_list(tmp, size);
	tmp->size = ft_list_size(tmp);
}

void		initialise(t_push *ps)
{
	ps->debug = 0;
	ps->lst_a.size = 0;
	ps->lst_b.size = 0;
	ps->lst_a.lst = NULL;
	ps->lst_b.lst = NULL;
}

void		init(t_push *ps, char **av, int ac)
{
	int				i;
	char			**args;
	t_listdata		temp;

	args = (char**)malloc(sizeof(char *) * ac);
	arrcpy(av, args);
	i = 1;
	initialise(ps);
	if (ac == 2)
	{
		free2(args);
		args = ft_strsplit(av[1], ' ');
		ARRLEN(args, ac);
	}
	while (ac - (i + 1) >= (0) && ac - (i + 1) < ac)
	{
		if (!ft_isnum(args[ac - (i + 1)]))
			error();
		push_list(&ps->lst_a, ft_atoi(args[ac - (i + 1)]));
		i++;
	}
	tmplist(&temp, ft_list_size(&ps->lst_a));
	free2(args);
	ps->lst_a = normalize(&temp, ft_list_size(&ps->lst_a), &ps->lst_a);
}

int			find_list_length(t_list *list)
{
	t_node	*node;
	int		list_len;

	node = list->head;
	list_len = 0;
	while (node != NULL)
	{
		list_len++;
		node = node->next;
	}
	return (list_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:13:07 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/17 13:01:04 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*get_args(int len, char **argv)
{
	t_list	*tmp;
	t_list	*ret;
	char	**split;
	int		i;
	int		j;

	i = 0;
	ret = ft_list_new();
	tmp = ret;
	while (++i < len)
	{
		j = -1;
		split = ft_strsplit(argv[i], ' ');
		while (split[++j] != NULL)
			tmp = ft_list_append(tmp, ft_atoi(split[j]));
		free2(split);
		free3(ret);
	}
	return (tmp);
}

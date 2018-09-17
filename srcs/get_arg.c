/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:13:07 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/17 17:57:29 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*get_args(int len, char **argv)
{
	t_list	*ret;
	char	**split;
	int		i;
	int		j;

	i = 0;
	ret = ft_list_new();
	while (++i < len)
	{
		j = -1;
		split = ft_strsplit(argv[i], ' ');
		while (split[++j] != NULL)
			ret = ft_list_append(ret, ft_atoi(split[j]));
		ft_strdel(split);
	}
	return (ret);
}

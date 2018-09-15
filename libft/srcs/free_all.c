/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:33:33 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/15 15:04:30 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	free2(char **all)
{
	int		counter;

	counter = 0;
	while (all[counter])
	{
		free(all[counter]);
		counter++;
	}
	free(all);
}

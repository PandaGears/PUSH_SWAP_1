/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:12:43 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/08 16:28:52 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void		lesser(int len, t_list *l_a, t_list *l_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0)
	{
		pa_print(l_a, l_b);
		len2--;
	}
}

void		midder(int len, t_list *l_a, t_list *l_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		{
			smallest_first(len, l_a);
			pb_print(l_a, l_b);
		}
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0 && l_b != NULL)
	{
		pa_print(l_a, l_b);
		len2--;
	}
}

void		larger(int len, t_list *l_a, t_list *l_b)
{
	int		count;
	int		returned;
	int		len2;

	len2 = fifth_list(len);
	count = 5;
	returned = 0;
	while (count != 1 && !is_sort(l_a, l_b))
	{
		smallest_first(len, l_a);
		pb_print(l_a, l_b);
	/*	while (l_b->head != NULL)	*/
	/*	{	*/
		/*	biggest_first(len2, l_b);	*/
		/*	pa_print(l_a, l_b);	*/
		/*	returned++;	*/
	/*	}	*/
	/*	while (returned > 0)	*/
	/*	{	*/
		/*	pb_print(l_a, l_b);	*/
		/*	returned--;	*/
	/*	}	*/
	}
	while (l_b->head != NULL)
		pa_print(l_a, l_b);
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

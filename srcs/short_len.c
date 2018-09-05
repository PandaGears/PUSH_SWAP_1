
#include "../includes/push_swap.h"

void	smallest_first(t_list *l_a)
{
	t_node	*node;
	int		tmp;

 	tmp = l_a->head->data;
	node = l_a->head;
	while (node != NULL)
	{
		if (node->data < tmp)
			tmp = node->data;
		node = node->next;
	}
	while (l_a->head->data != tmp)
	{
		if (l_a->head->data != tmp && l_a->tail->data == tmp)
			rra_print(l_a);
		else if (l_a->head->data != tmp && l_a->head->next->data == tmp)
			sa_print(l_a);
		else if	(l_a->head->data != tmp && l_a->tail->prev->data == tmp)
		{
			rra_print(l_a);
			rra_print(l_a);
		}
 		else
			ra_print(l_a);
	}
} 

void		list_4(t_list *l_a, t_list *l_b)
{
		smallest_first(l_a);
		pb_print(l_a, l_b);
		list_3(l_a);
		pa_print(l_a, l_b);
}

void		list_5(t_list *l_a, t_list *l_b)
{
			smallest_first(l_a);
			pb_print(l_a, l_b);
			smallest_first(l_a);
			pb_print(l_a, l_b);
			list_3(l_a);
			pa_print(l_a, l_b);
			pa_print(l_a, l_b);
}

void		list_3(t_list *l_a)
{
	if(HEADA > NEXTA && TAILA < NEXTA)
	{
		sa_print(l_a);
		rra_print(l_a);
	}
	else if (HEADA > NEXTA && NEXTA < TAILA && HEADA < TAILA)
		sa_print(l_a);
	else if (HEADA > NEXTA && NEXTA < TAILA && HEADA > TAILA)
		ra_print(l_a);
	else if (HEADA < NEXTA && NEXTA > TAILA && HEADA > TAILA)
		rra_print(l_a);
	 if (HEADA < NEXTA && TAILA < NEXTA && NEXTA < HEADA)
	{
		rra_print(l_a);
		sa_print(l_a);
	}
	else if (HEADA < NEXTA && TAILA < NEXTA && NEXTA > HEADA)
	{
		rra_print(l_a);
		sa_print(l_a);
	}
}

#include "../includes/push_swap.h"

void		quicksort(t_list *l_a, t_list *l_b)
{
	t_node	*tmp;

	while (!is_sort(l_a, l_b))
	{
		l_a->pivot = choose_pivot(l_a);
		while (l_a->head->data < l_a->pivot)
			pushing_to_b(l_a, l_b);
		while (1)
		{
			tmp = l_a->head;
			while (tmp && tmp->data >= l_a->pivot)
				tmp = tmp->next;
			if (!tmp)
				break ;
			while (l_a->head->data < l_a->pivot)
				pushing_to_b(l_a, l_b);
			if (l_a->head->next && HEADA > NEXTA &&
				TAILA > l_a->pivot)
				sa_print(l_a);
			(!is_sort(l_a, l_b)) ? ra_print(l_a) : 0;
		}
	}
	optimize_order(l_a, l_b);
	while (l_b->head)
		pa_print(l_a, l_b);
}
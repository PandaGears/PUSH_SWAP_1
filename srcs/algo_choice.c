
#include "../includes/push_swap.h"

void	algos_backwards(int len, t_list *list_a, t_list *list_b)
{
	while (len > 3)
	{
		pb_print(list_a, list_b);
		len--;
	}
	sa_print(list_a);
	rra_print(list_a);
	while (list_b->head != NULL)
	{
		pa_print(list_a, list_b);
		ra_print(list_a);
	}
}

void	decisions(int length, t_list *l_a, t_list *l_b)
{
	length = length - 1;
	if (is_backwards_list(l_a) == 1)
			algos_backwards(length, l_a, l_b);
	else if (length == 5)
		list_5(l_a, l_b);
	else if (length == 4)
		list_4(l_a, l_b);
	else if (length == 3)
		list_3(l_a);
	else if (length < 7)
		l_a_sort(l_a);
	else if (length >= 100)
		quicksort(l_a, l_b);
}

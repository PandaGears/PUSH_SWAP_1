#include "../includes/push_swap.h"

void	decisions(int length, t_list *l_a, t_list *l_b)
{
	length = length - 1;
	if (length == 5)
		list_5(l_a, l_b);
	else if (length == 4)
		list_4(l_a);
	else if (length == 3)
		list_3(l_a, l_b);
	else if (length < 7)
		l_a_sort(l_a);
	else if (length >= 10)
		optimization(length, l_a, l_b);
	else if (length >= 100)
		quicksort(l_a, l_b);
}
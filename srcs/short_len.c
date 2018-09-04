
#include "../includes/push_swap.h"

void		list_4(t_list *l_a)
{
	if (is_backwards_list(l_a) == 1)
	{
		sa_print(l_a);
		rra_print(l_a);
		rra_print(l_a);
		sa_print(l_a);
	}
	else
		sa_print(l_a);
}

void		list_5(t_list *l_a, t_list *l_b)
{
	if (is_backwards_list(l_a) == 1)
	{
		pb_print(l_a, l_b);
		pb_print(l_a, l_b);
		ss_print(l_a, l_b);
		rra_print(l_a);
		pa_print(l_a, l_b);
		pa_print(l_a, l_b);
		ra_print(l_a);
		ra_print(l_a);
	}
	else
		l_a_sort(l_a);
}

void		list_3(t_list *l_a, t_list *l_b)
{
	if (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data < l_a->tail->data && \
			l_a->head->data < l_a->tail->data)
		sa_print(l_a);
	else if (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data < l_a->tail->data)
		ra_print(l_a);
	else if (l_a->head->data > l_a->head->next->data && \
			l_a->head->next->data > l_a->tail->data)
	{
		sa_print(l_a);
		if ((!is_sort(l_a, l_b)) && l_a->head->next->data > l_a->tail->data)
			rra_print(l_a);
		else
			ra_print(l_a);
	}
	else if (is_backwards_list(l_a) == 1)
	{
		sa_print(l_a);
		rra_print(l_a);
	}
}

void		list_100(t_list *l_a, t_list *l_b)
{
	if ((is_backwards_list(l_a) == 1))
	{
		
	}


}

#include "../includes/push_swap.h"

static void	optimization_2(t_list *l_a, t_list *l_b)
{
	if (l_a->head->next && l_a->head->data > l_a->head->next->data)
		sa_print(l_a);
	if (l_a->tail->prev && l_a->tail->data < l_a->tail->prev->data)
	{
		rra_print(l_a);
		while (l_a->tail->prev && l_a->tail->data < l_a->tail->prev->data)
		{
			pb_print(l_a, l_b);
			rb_print(l_b);
			rra_print(l_a);
		}
		rra_print(l_a);
		sa_print(l_a);
		while (l_b->head != NULL)
		{
			pa_print(l_a, l_b);
			ra_print(l_a);
		}
		ra_print(l_a);
		ra_print(l_a);
	}
}

void		optimization(int len, t_list *l_a, t_list *l_b)
{
	while (l_a->tail->data < l_a->head->data)
	{
		if (l_a->head->data > l_a->head->next->data && len > 2)
			sa_print(l_a);
		rra_print(l_a);
		if (l_a->head->data > l_a->head->next->data && len > 2)
			sa_print(l_a);
		while (l_a->head->next && l_a->tail->data > l_a->head->data && len > 2)
		{
			pb_opt(l_a, l_b);
			rra_print(l_a);
			if (l_a->head->data > l_a->head->next->data \
					&& len > 2)
				sa_print(l_a);
		}
	}
	while (l_b->head != NULL)
	{
		pa_print(l_a, l_b);
		if (l_a->head->data > l_a->head->next->data && \
				len > 2)
			sa_print(l_a);
	}
	optimization_2(l_a, l_b);
}

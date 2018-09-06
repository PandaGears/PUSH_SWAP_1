
#include "../includes/push_swap.h"

static void	optimization_2(t_list *l_a, t_list *l_b)
{
	if (HEADA && HEADA > NEXTA)
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
	while (TAILA < HEADA)
	{
		if (HEADA > NEXTA && len > 2)
			sa_print(l_a);
		rra_print(l_a);
		if (HEADA > NEXTA && len > 2)
			sa_print(l_a);
		while (l_a->head->next && TAILA > HEADA && len > 2)
		{
			pb_opt(l_a, l_b);
			rra_print(l_a);
			if (l_a->head->data > NEXTA \
					&& len > 2)
				sa_print(l_a);
		}
	}
	while (l_b->head != NULL)
	{
		pa_print(l_a, l_b);
		if (HEADA > NEXTA && \
				len > 2)
			sa_print(l_a);
	}
	optimization_2(l_a, l_b);
}

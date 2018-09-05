
#include "../includes/push_swap.h"

void		list_4(t_list *l_a, t_list *l_b)
{
		smallest_first(l_a);
		pb_print(l_a, l_b);
		list_3(l_a);
		pa_print(l_a, l_b);
}

void		list_5(t_list *l_a, t_list *l_b)
{
		if (HEADA < NEXTA && NEXTA < NEXEXTA && \
			NEXEXTA > PREVA && PREVA > TAILA)
			rand_1(l_a, l_b);
		else if(HEADA < NEXTA && NEXTA < NEXEXTA && \
			NEXTA < PREVA && NEXTA < TAILA)
			a_list_5(l_a, l_b);
		else if(HEADA > NEXTA && NEXTA < NEXEXTA && \
			NEXTA < PREVA && NEXTA < TAILA)
			a_list_5(l_a, l_b);
}

void		list_3(t_list *l_a)
{
	if (HEADA > NEXTA && NEXTA < TAILA && HEADA < TAILA)
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

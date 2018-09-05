#include "../includes/push_swap.h"

void    backwards_5(t_list *l_a, t_list *l_b)
{
    if((is_backwards_list(l_a) == 1))
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
}

void	rand_1(t_list *l_a, t_list *l_b)
{
	if (HEADA < NEXTA && NEXTA < NEXEXTA && \
		NEXEXTA > PREVA && PREVA > TAILA)
	{
		pb_print(l_a, l_b);
		pb_print(l_a, l_b);
		sa_print(l_a);
		rra_print(l_a);
		pa_print(l_a, l_b);
		pa_print(l_a, l_b);
	}
}

void	a_list_5(t_list *l_a, t_list *l_b)
{
	if(HEADA > NEXTA)
		sa_print(l_a);
	pb_print(l_a, l_b);
	pb_print(l_a, l_b);
	list_3(l_a);
	pa_print(l_a, l_b);
	pa_print(l_a, l_b);
}


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
	while(l_a != NULL)
	{
	//	if (is_backwards_list(l_a) == 1)
	//	backwards_5(l_a, l_b)
		/*else*/ if (HEADA < NEXTA && NEXTA < NEXEXTA && \
		NEXEXTA > PREVA && PREVA > TAILA)
		rand_1(l_a, l_b);
		else if(HEADA < NEXTA && NEXTA < NEXEXTA && \
		NEXTA < PREVA && NEXTA < TAILA)
			3_list_5(t_list *l_a, t_list *l_b);
	}
}

void		list_3(t_list *l_a, t_list *l_b)
{
	if (HEADA > NEXTA && NEXTA < TAILA && HEADA < TAILA)
		sa_print(l_a);
	else if (HEADA > NEXTA && NEXTA < TAILA)
		ra_print(l_a);
	else if (HEADA > NEXTA && NEXTA > TAILA)
	{
		sa_print(l_a);
		if ((!is_sort(l_a, l_b)) && NEXTA > TAILA)
			rra_print(l_a);
		else
			ra_print(l_a);
	}
	// else if(is_backwards_list(l_a) == 1)
	// {
	// 	sa_print(l_a);
	// 	rra_print(l_a);
	// }
}

void		list_100(t_list *l_a, t_list *l_b)
{
	if ((is_backwards_list(l_a) == 1))
	{
		
	}


}
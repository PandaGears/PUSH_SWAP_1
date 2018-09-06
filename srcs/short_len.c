
#include "../includes/push_swap.h"

void	list_2(t_list *l_a)
{
	if (HEADA > TAILA)
		sa_print(l_a);
}

void		list_3(t_list *l_a)
{
	if (HEADA < NEXTA)
	{
		rra_print(l_a);
		if (is_sorted_list(l_a) == 0)
			sa_print(l_a);
	}
	else if (HEADA > NEXTA)
	{
		if (HEADA > TAILA)
			ra_print(l_a);
		if (is_sorted_list(l_a) == 0)
			sa_print(l_a);
	}
	else
		sa_print(l_a);
}

void		lesser(int len, t_list *l_a, t_list *l_b)
{
	int len2;

	len2 = 0;
	while (len > 3)
	{
			smallest_first(l_a);
			pb_print(l_a, l_b);
			len--;
			len2++;
	}
			list_3(l_a);
	while (len2 != 0)
	{
		pa_print(l_a, l_b);
		len2--;
	}

}

void		midder(int len, t_list *l_a, t_list *l_b)
{
	int len2;

	len2 = 0;
	while (len > 3)
	{
		if (HEADA < NEXTA)
			pb_print(l_a, l_b);
		else
		{	
			smallest_first(l_a);
			pb_print(l_a, l_b);
			if (HEADB < NEXTB  && HEADA > NEXTA)
				ss_print(l_a, l_b);
			else if (HEADB > NEXTB)
				sb_print(l_b);
			else if(HEADA > NEXTA)
				sa_print(l_a);
		}
		len--;
		len2++;
	}
	list_3(l_a);
	while (len2 != 0)
	{
		pa_print(l_a, l_b);
		len2--;
	}
}
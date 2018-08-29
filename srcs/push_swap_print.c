#include "../includes/push_swap.h"

void	pa_print(t_list *l_a, t_list *l_b)
{
	pa(l_a, l_b);
	ft_putstr(YEL"pa\n"NRM);
}

void	pb_print(t_list *l_a, t_list *l_b)
{
	pb(l_a, l_b);
	ft_putstr(YEL"pb\n"NRM);
}

void	sa_print(t_list *l_a)
{
	sa(l_a);
	ft_putstr(YEL"sa\n"NRM);
}

void	sb_print(t_list *l_b)
{
	sb(l_b);
	ft_putstr(YEL"sb\n"NRM);
}

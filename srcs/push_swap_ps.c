
#include "../includes/push_swap.h"

void	pa_print(t_list *l_a, t_list *l_b)
{
	pa(l_a, l_b);
	ft_putstr("pa\n");
}

void	pb_print(t_list *l_a, t_list *l_b)
{
	pb(l_a, l_b);
	ft_putstr("pb\n");
}

void	sa_print(t_list *l_a)
{
	sa(l_a);
	ft_putstr("sa\n");
}

void	sb_print(t_list *l_b)
{
	sb(l_b);
	ft_putstr("sb\n");
}

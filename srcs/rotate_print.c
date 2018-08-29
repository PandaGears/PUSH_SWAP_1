#include "../includes/push_swap.h"

void	ra_print(t_list *l_a)
{
	ra(l_a);
	ft_putstr(YEL"ra\n"NRM);
}

void	rb_print(t_list *l_b)
{
	rb(l_b);
	ft_putstr(YEL"rb\n"NRM);
}

void	rra_print(t_list *l_a)
{
	rra(l_a);
	ft_putstr(YEL"rra\n"NRM);
}

void	rrb_print(t_list *l_b)
{
	rrb(l_b);
	ft_putstr(YEL"rrb\n"NRM);
}
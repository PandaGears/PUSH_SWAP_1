#include "../includes/push_swap.h"

void	print_stacks(t_list *la, t_list *lb)
{
	ft_putstr_fd("Stack A: ", 2);
	ft_print_list(la);
	ft_putstr_fd("\nStack B: ", 2);
	ft_print_list(lb);
	ft_putstr_fd("\n", 2);
}
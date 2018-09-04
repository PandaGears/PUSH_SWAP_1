
#include "../includes/push_swap.h"

void	ok(void)
{
	ft_putstr(GRN"OK\n"NRM);
	exit(1);
}

void	error(void)
{
	ft_putstr(RED"Error\n"NRM);
	exit(1);
}

void	show_usage(void)
{
	exit(1);
}

void	ko(void)
{
	ft_putstr(RED"KO\n"NRM);
	exit(1);
}

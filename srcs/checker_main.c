
#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*l_a;
	t_list	*l_b;

	error_checker(argc, argv);
	argv++;
	l_a = ft_list_new();
	l_b = ft_list_new();
	while (*argv)
	{
		l_a = ft_list_append(l_a, ft_atol(*argv));
		argv++;
	}
	checker_r(l_a, l_b);	
	if (is_sort(l_a, l_b))
		ok();
	else
		ko();
}

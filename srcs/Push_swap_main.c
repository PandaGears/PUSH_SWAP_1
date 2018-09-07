
#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*l_a;
	t_list	*l_b;

	error_checker(argc, argv);
	l_a = ft_list_new();
	l_b = ft_list_new();
	argv++;
	while (*argv)
	{
		l_a = ft_list_append(l_a, ft_atoi(*argv));
		argv++;
	}
	if (is_sort(l_a, l_b))
		return (0);
	else
		decisions(l_a, l_b);
}

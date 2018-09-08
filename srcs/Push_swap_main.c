
#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	// t_list	*args;

	if (argc > 1)
	{
		// args = get_args(argc, argv);
		error_checker(argc, argv);
		list_a = ft_list_new();
		list_b = ft_list_new();
		argv++;
		while (*argv)
		{
			list_a = ft_list_append(list_a, ft_atoi(*argv));
			argv++;
		}
		if (is_sort(list_a, list_b))
			exit(1);
		else
			decisions(list_a, list_b);
	}
	else
		exit(1);
}
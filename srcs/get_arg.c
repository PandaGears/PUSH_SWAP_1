#include "../includes/push_swap.h"

t_list		*get_args(int len, char **argv)
{
	t_list	*list;
	char	**split;
	int		i;
	int		j;

	len = 0;
	i = 0;
	list = NULL; //ft_list_new();
	while (argv[i])
	{
		split = ft_strsplit(argv[i], ' ');
		j = 0;
		while (argv[j])
		{
			if (error_check(argv) == 1)
				list = ft_list_append(list, ft_atol(split[j]));
			else 
				error();
			j++;
		}
		i++;
		len++;
		ft_strdel(split);
	}
	return (0);
}

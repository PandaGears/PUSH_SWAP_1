#include "../includes/push_swap.h"

t_list		*get_args(int len, char **argv)
{
	t_list	*ret;
	char	**split;
	int		i;
	int		j;

	i = 0;
	ret = ft_list_new();
	while (++i < len)
	{
		j = -1;
		split = ft_strsplit(argv[i], ' ');
		while (split[++j] != NULL)
		{
			printf("Split [%d]%s \n", j, split[j]);
			ret = ft_list_append(ret, ft_atoi(split[j]));
		}
		ft_strdel(split);
	}
	ft_print_list(ret);
	return (ret);
}
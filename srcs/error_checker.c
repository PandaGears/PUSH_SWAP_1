#include "../includes/push_swap.h"

int		is_not_digit(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] != '-' && str[i] != '+' && \
		(!(ft_isdigit(str[i]))) && (!(ft_isspace(str[i]))))
			return (0);
		i++;
	}
	return (1);
}

int		checkup(int argc, char **argv)
{
	int i;
	int j;
	int tmp;

	i = 1;
	while (i < argc)
	{
		tmp = ft_atoi(argv[i]);
		j = i;
		while (j < argc - 1)
		{
			if (tmp == ft_atoi(argv[j + 1]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		error_checker(int argc, char **argv)
{
	long i;
	int cnt;

	i = 1;
	cnt = 1;
	while (i < argc)
	{
		if (is_not_digit(argv[1]))
			cnt++;
		else
			break ;
		i++;
	}
	if (checkup(argc, argv) == 1)
		return ((cnt == argc) ? 1 : 0);
	return (0);
}

int		error_official(int argc, char **argv)
{
		if (!error_checker(argc, argv) || argc <= 1)
	{
		if (!error_checker(argc, argv))
			error();
		else if(argc <= 1)
			exit(1);
	}
	return (0);
}
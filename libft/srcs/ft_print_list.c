
#include "../includes/libft.h"

void		ft_print_list(t_list *lst1)
{
	t_node	*tmp;

	if (lst1 != NULL)
	{
		tmp = lst1->head;
		while (tmp != NULL)
		{
			ft_putnbr(tmp->data);
			if (tmp->next != NULL)
				ft_putstr(" - ");
			tmp = tmp->next;
		}
	}
	ft_putchar('\n');
}

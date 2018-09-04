
#include "../includes/libft.h"

void		ft_print_list(t_list *lst1, t_list *lst2)
{
	t_node	*tmp;
	t_node	*tmp2;
	if (lst1 != NULL)
	{
		tmp = lst1->head;
		ft_putstr(CYN"stack_a:"NRM);
		while (tmp != NULL)
		{
			ft_putnbr(tmp->data);
			if (tmp->next != NULL)
				ft_putstr(" - "); 
			tmp = tmp->next;
		}
	}
	ft_putchar('\n');	
	 if (lst2 != NULL)
	 {
		tmp2 = lst2->head;
		ft_putstr(BLU"stack_b:"NRM);
		while (tmp2 != NULL)
		{
			ft_putnbr(tmp2->data);
			if (tmp->next != NULL)
				ft_putstr(" - ");
			tmp2 = tmp2->next;
		}
	 }
	ft_putchar('\n');
}

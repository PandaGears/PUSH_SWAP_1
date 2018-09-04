
#include "../includes/push_swap.h"

void		rotate(t_list *lst)
{
	ft_list_append(lst, lst->head->data);
	ft_list_del(lst, lst->head);
}

void		ra(t_list *lst)
{
	rotate(lst);
}

void		rb(t_list *lst)
{
	rotate(lst);
}

void		rr(t_list *l_a, t_list *l_b)
{
	rotate(l_a);
	rotate(l_b);
}

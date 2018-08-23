#include "../includes/push_swap.h"

void	smallest_first(t_list *lst) //standard
{
	t_node	*node;
	int		tmp;

	tmp = lst->head->data;
	node = lst->head;
	while (node != NULL)
	{
		if (node->data < tmp)
			tmp = node->data;
		node = node->next;
	}
	while (lst->head->data != tmp)
	{
		if (lst->head->data != tmp && lst->tail->data == tmp)
			rra(lst);
		else if (lst->head->data != tmp && lst->head->next->data == tmp)
			sa(lst);

		else
			ra(lst);
	}
}

//void	quicksorter(t_list *lst) //for bigger args
//{

//}
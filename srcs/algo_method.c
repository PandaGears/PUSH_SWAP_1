
#include "../includes/push_swap.h"
void	smallest_first(t_list *l_a)
{
	t_node	*node;
	int		tmp;

 	tmp = l_a->head->data;
	node = l_a->head;
	while (node != NULL)
	{
		if (node->data < tmp)
			tmp = node->data;
		node = node->next;
	}
	while (l_a->head->data != tmp)
	{
		if (l_a->head->data != tmp && l_a->tail->data == tmp)
			rra_print(l_a);
		else if (l_a->head->data != tmp && l_a->head->next->data == tmp)
			sa_print(l_a);
		else if	(l_a->head->data != tmp && l_a->tail->prev->data == tmp)
		{
			rra_print(l_a);
			rra_print(l_a);
		}
 		else
			ra_print(l_a);
	}
} 

int		half_list(int len)
{
	int div;

	if (len % 2 == 0)
		div = len / 2;
	else
	{
		len = len - 1;
		div = len / 2;
	}
	return (div);
}

void	is_maximum(t_list *l_a)
{	
	t_node	*maxim;

	maxim = l_a->head;
	while (maxim->next != NULL)
	{
		if (maxim->data < maxim->next->data)
			maxim = maxim->next;
	}
}
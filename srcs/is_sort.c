
#include "../includes/push_swap.h"

int			is_sort(t_list *l_a, t_list *l_b)
{
	t_node	*node;

	node = l_a->head;
	if (l_a->head->data == l_a->tail->data)
		if (l_b->head == NULL)
			return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	if (l_b->head != NULL)
		return (0);
	else
		return (1);
}


int is_backwards(t_list *l_a)
{
	t_node *node;
	int tmp;

	node = l_a->head;
	tmp = l_a->head->data;
	while (node != NULL)
	{
		if(node->data > tmp)
		{
			tmp = node->data;
			node = node->next;
		}
		else
		{
			return(0);
			exit(1);
		}
	}
		return (1);

}
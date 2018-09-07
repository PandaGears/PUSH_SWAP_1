
#include "../includes/push_swap.h"

int		is_sort(t_list *l_a, t_list *l_b)
{
	t_node	*node;
	if (l_a->head != NULL)
		node = l_a->head;
	else
		return (0);
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

int		is_sorted_list(t_list *l_a)
{
	t_node	*node;

	node = l_a->head;
	if (l_a->head->data == l_a->tail->data)
		return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}

int		is_backwards_list(t_list *list_a)
{
	t_node	*current;

	current = list_a->head;
	while (current->data > current->next->data)
	{
		current = current->next;
		if (current == list_a->tail)
			return (1);
	}
	return (0);
}

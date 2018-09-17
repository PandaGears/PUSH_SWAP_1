
#include "../includes/push_swap.h"

void	free3(t_list *list)
{
	// t_node	*current;

	// current = list->head;
	// while (current->next)
	// {
	// 	free(current);
	// 	current = current->next;
	// }
	// free(current);
	while (list->data)
	{
		free(list->data);
		list->data = list->next->data;
	}
	free(list->data);
}

void	free_double(t_list *l_a, t_list *l_b)
{
	free3(l_a);
	free3(l_b);
}


#include "../includes/libft.h"

t_list		*ft_list_prepend(t_list *lst, int value)
{
	t_node	*node;

	if (lst != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = value;
			node->prev = NULL;
			if (lst->head == NULL)
			{
				node->next = NULL;
				lst->tail = node;
				lst->head = node;
			}
			else
			{
				node->next = lst->head;
				lst->head->prev = node;
				lst->head = node;
			}
			lst->len++;
		}
	}
	return (lst);
}

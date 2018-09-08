
#include "../includes/libft.h"

t_list		*ft_list_append(t_list *lst, int value)
{
	t_node	*node;

	if (lst != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = value;
			node->next = NULL;
			if (lst->tail == NULL)
			{
				node->prev = NULL;
				lst->head = node;
				lst->tail = node;
			}
			else
			{
				node->prev = lst->tail;
				lst->tail->next = node;
				lst->tail = node;
			}
			lst->len++;
		}
	}
	return (lst);
}

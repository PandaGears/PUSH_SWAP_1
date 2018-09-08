
#include "../includes/libft.h"

t_list		*ft_list_del(t_list *lst, t_node *node)
{
	if (node->next == NULL && node->prev == NULL)
	{
		lst->head = NULL;
		lst->tail = NULL;
	}
	else if (node->prev == NULL)
	{
		lst->head = node->next;
		lst->head->prev = NULL;
	}
	else if (node->next == NULL)
	{
		lst->tail = node->prev;
		lst->tail->next = NULL;
	}
	else
	{
		node->prev->next = node->prev;
		node->next->prev = node->next;
	}
	free(node);
	node = NULL;
	lst->len--;
	return (lst);
}

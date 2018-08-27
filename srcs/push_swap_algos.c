#include "../includes/push_swap.h"

void	smallest_first(t_list *lst)
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

void	bubble_sorter(int *a, int size) //for smaller args
{
	int i;
	int j;

	i = 0;
	while(i < (size - 1))
	{
		j = 0;
		while(j < size - (i + 1))
		{
			if(a[j] > a[j + 1])
				ft_swap(&a[j], &a[j + 1]);	
		}
		j++;
	}
	i++;
}
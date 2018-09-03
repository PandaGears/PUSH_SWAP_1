#include "../includes/push_swap.h"

void	rotate_opt(t_list *l_a, t_list *l_b)
{
	int		i;
	int		value;
	t_node	*node;

	i = 0;
	value = l_a->head->data;
	node = l_b->head->next;
	if (value > l_b->head->data && value < l_b->tail->data)
		return ;
	while (node && (node->data > value || node->prev->data < value))
	{
		i++;
		node = node->next;
	}
	if (i < l_b->bsize / 2)
		while (l_b->head->data > value || l_b->tail->data < value)
			rb_print(l_b);
	else
		while (l_b->head->data > value || l_b->tail->data < value)
			rrb_print(l_b);
}

void	order_opt(t_list *l_b)
{
	int		i;
	t_node	*node;

	i = 0;
	node = l_b->head;
	if (node)
	{
		while (node->next && node->data > node->next->data && ++i)
			node = node->next;
		if (!node)
			return ;
		if (i > l_b->bsize / 2)
			while (l_b->tail->data > l_b->head->data)
				rrb_print(l_b);
		else
			while (l_b->tail->data > l_b->head->data)
				rb_print(l_b);
	}
}

void	pb_opt(t_list *l_a, t_list *l_b)
{
	int		value;
	int		done;
	t_node	*node;

	done = 0;
	if (l_a->head && l_a->head->next)
		if (l_a->head->data > l_a->head->next->data)
			sa_print(l_a);
	node = l_b->head;
	value = l_a->head->data;
	while (node && value < node->data)
		node = node->next;
	if (!node && !done && ++done)
		order_opt(l_b);
	node = l_b->head;
	while (node && value > node->data)
		node = node->next;
	if (!node && !done && ++done)
		order_opt(l_b);
	if (!done && ++done)
		rotate_opt(l_a, l_b);
	pb_print(l_a, l_b);
}

int	choose_pivot(t_list *lst)
{
	int		i;
	int		split;
	t_node	*node_1;
	t_node	*node_2
    ;

	split = (lst->asize <= 400) ? 2 : 7;
	node_1 = lst->head;
	while (node_1->next)
	{
		i = 0;
		node_2 = lst->head;
		while (node_2)
		{
			if (node_2->data < node_1->data)
				i++;
			if (i > (lst->asize + 1) / split)
				break ;
			node_2 = node_2->next;
		}
		if (i == (lst->asize + 1) / split)
			break ;
		node_1 = node_1->next;
	}
	return (node_1->data);
}

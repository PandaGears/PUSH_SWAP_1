
#include "../includes/push_swap.h"

void	smallest_first(int len, t_list *l_a)
{
	int		smallest;
	int		smallest_pos;

	smallest = is_minimum(l_a);
	smallest_pos = smallest_ident(l_a);
	move_up_a(smallest, len, smallest_pos, l_a);
}

void	move_up_a(int size, int len, int pos, t_list *lst)
{
	int half;

	half = half_list(len);
	while (lst->head->data != size)
	{
		half = half_list(len);
		if (lst->head->data != size && lst->tail->data == size)
			rra_print(lst);
		else if (lst->head->data != size && lst->head->next->data == size && \
		lst->head->next->next->data > lst->head->data)
			sa_print(lst);
		else if (lst->head->data != size && lst->tail->prev->data == size)
		{
			rra_print(lst);
			rra_print(lst);
		}
		else
		{
			if (pos > half)
				ra_print(lst);
			else if (pos <= half)
				ra_print(lst);
		}
	}
}

void	biggest_first(int len, t_list *list)
{
	t_node	*node;
	int		biggest;
	int		biggest_pos;

	len = fifth_list(len);
	node = list->head;
	biggest = is_maximum(list);
	biggest_pos = biggest_ident(list);
	move_up_b(biggest, len, biggest_pos, list);
}

void	move_up_b(int size, int len, int pos, t_list *lst)
{
	int half;

	half = half_list(len);
	while (lst->head->data != size)
	{
		if (lst->head->data != size && lst->tail->data == size)
			rrb_print(lst);
		else if (lst->head->data != size && lst->head->next->data == size)
			sb_print(lst);
		else if (lst->head->data != size && lst->tail->prev->data == size)
		{
			rrb_print(lst);
			rrb_print(lst);
		}
		else
		{
			if (pos > half)
				rrb_print(lst);
			else if (pos <= half)
				rb_print(lst);
		}
	}
}

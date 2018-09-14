/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 18:01:18 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 18:38:06 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		checkdoublerule(t_push *push)
{
	if ((L_AB) && (L_BNEXT->value > L_B->value) \
		&& (L_A->value > L_ANEXT->value) && (L_A->value < &push->lst_a))
	{
		DOUB_RULE("ss");
	}
	if ((L_AB) && (L_BNEXT->value < L_B->value) && \
	 (L_A->value < L_ANEXT->value)\
	&& (L_ANEXT->value > (&push->lst_a)) && (BBV > L_BNEXT->value))
	{
		DOUB_RULE("ss");
	}
	if ((L_AB) && (L_B->value < BBV) && (L_A->value > &push->lst_a))
	{
		DOUB_RULE("rr");
	}
	return (0);
}

void	rotate_a_end(t_push *push)
{
	while (&push->lst_a != HI_V(&push->lst_a))
	{
		if (find_pos(&push->lst_a, biggest_num_l(&push->lst_a)) < \
			(ft_list_size(&push->lst_a) / 2))
		{
			RULE("ra");
		}
		else
		{
			RULE("rra");
		}
	}
}

void	pushbacktoa(t_push *push)
{
	while (L_B)
	{
		if (HI_V(&push->lst_a) < HI_V(&push->lst_b))
			RULE("rb");
		if (L_A->value < HI_V(&push->lst_b))
			RULE("ra");
		if (check_largest_l(&push->lst_b) && L_B->value > LO_V(A_L))
			RULE("pa");
		if (!L_B || ((&push->lst_a > HI_V(&push->lst_b)) && (&push->lst_a < L_A->value)))
			RULE("rra");
		if (HI_V(&push->lst_b) != L_B->value)
		{
			if (find_pos(&push->lst_b, HI_V(&push->lst_b)) < \
			(ft_list_size(&push->lst_a) / 2))
			{
				while (HI_V(&push->lst_b) != L_B->value)
					RULE("rb");
			}
			else
				while (HI_V(&push->lst_b) != L_B->value)
					RULE("rrb");
		}
		RULE("pa");
	}
	rotate_a_end(push);
}

void	backtoa(t_push *push)
{
	while (L_B)
	{
		if ((L_BB) && move(B_L, HI_V(B_L)) < move(B_L, NEWH(B_L)))
		{
			while (L_B->value != HI_V(B_L))
			{
				rotateb(push, BHP(HI_V(B_L)), (ft_list_size(B_L) / 2));
			}
			RULE("pa");
		}
		else
		{
			if (ft_list_size(B_L) > 2)
				secondhighest(push);
			else if (L_B->value != HI_V(B_L))
			{
				RULE("sb");
			}
			else
				RULE("pa");
		}
	}
}

void	rotate_b(t_push *push, int i)
{
	int	lst_a;

	if ((L_A && L_BB) && L_A->value < HI_V(&push->lst_b) && \
	L_A->value > LO_V(&push->lst_b))
	{
		lst_a = biggest_under_l(&push->lst_b, L_A->value);
		if (find_pos(&push->lst_b, lst_a) < ft_list_size(&push->lst_b) / 2)
		{
			while (biggest_under_l(&push->lst_b, L_A->value) != L_B->value)
			{
				++i;
				RULE("rb");
			}
		}
		else
		{
			while (biggest_under_l(&push->lst_b, L_A->value) != L_B->value)
			{
				++i;
				RULE("rrb");
			}
		}
	}
}

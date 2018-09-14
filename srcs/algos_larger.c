/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_larger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:37:31 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 18:38:48 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		execute(t_push *push)
{
	while (!(is_sorted_list_l(A_L) == 1))
	{
		if ((L_AB) && (L_BNEXT->value > L_B->value)
		&& (L_A->value > L_ANEXT->value) && (L_A->value < ABV))
			RULE("ss");
		if ((L_AB) && (L_BNEXT->value < L_B->value)
			&& (L_A->value < L_ANEXT->value) && (L_ANEXT->value > ABV) && \
			(BBV > L_BNEXT->value))
			RULE("ss");
		if ((L_AB) && (L_B->value < BBV) && (L_A->value > ABV))
			RULE("rr");
		if ((L_AA) && (L_A->value > L_ANEXT->value) && (L_A->value < ABV))
			RULE("sa");
		if ((L_BB) && (L_BNEXT->value > L_B->value))
			RULE("sb");
		if ((L_AA) && (L_ANEXT->value > L_A->value) && (L_ANEXT->value > ABV))
			RULE("sa");
		if ((L_BB) && (L_B->value < BBV))
			RULE("rb");
		if ((L_AA) && (L_A->value > ABV))
			RULE("ra");
		RULE("pb");
	}
}

void		rotateb(t_push *push, int pos, int halfstack)
{
	int i;

	i = 0;
	while (!i)
	{
		i++;
		if (pos > halfstack)
		{
			RULE("rrb");
		}
		else
			RULE("rb");
	}
}

void		secondhighest(t_push *push)
{
	int i;

	i = 0;
	while (i < 2)
	{
		while (i == 0 && L_B->value != NEWH(B_L))
			rotateb(push, BHP(NEWH(B_L)), (ft_list_size(B_L) / 2));
		if (i == 0 && L_B->value == NEWH(B_L))
		{
			i++;
			RULE("pa");
		}
		while (i == 1 && L_B->value != HI_V(B_L))
			rotateb(push, BHP(HI_V(B_L)), (ft_list_size(B_L) / 2));
		if (i == 1 && L_B->value == HI_V(B_L))
		{
			i++;
			RULE("pa");
		}
	}
	while (i == 2)
	{
		i++;
		RULE("sa");
	}
}

void		piece_up(t_push *push)
{
	int i;

	i = 0;
	while (!(is_sorted_list_l(&push->lst_a) == 1))
	{
		i++;
		if (checkdoublerule(push))
			continue;
		if ((L_AA) && (L_A->value > ABV))
			RULE("ra");
		if ((L_AA) && (L_A->value > L_ANEXT->value) && (L_A->value < ABV))
			RULE("sa");
		if ((L_BB) && (L_B->value < BBV))
			RULE("rb");
		if ((L_BB) && (L_BNEXT->value > L_B->value))
			RULE("sb");
		if ((L_AA) && (ABV < L_A->value) && (ABV < L_ANEXT->value))
			RULE("rra");
		if ((L_AA) && (L_ANEXT->value > L_A->value) && (L_ANEXT->value > ABV))
			RULE("sa");
		rotate_b(push, i);
		RULE("pb");
	}
}

void		partition(t_push *push)
{
	int parts;
	int sect;
	int i;

	i = 0;
	sect = 1;
	parts = (ft_list_size(&push->lst_a) > 250 ? 10 : 5);
	while (sect <= parts)
	{
		while (i < RANGE())
		{
			if (L_A->value <= RANGE())
			{
				i++;
				RULE("pb");
			}
			else
				RULE("ra");
		}
		sect++;
	}
}

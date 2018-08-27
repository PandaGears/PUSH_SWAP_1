/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 06:49:27 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 06:50:38 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

int			        is_sort(t_list *l_a, t_list *l_b);
int		            is_not_digit(char *str);
int		            checkup(int argc, char **argv);

t_list 		        *checker_r(t_list *l_a, t_list *l_b);

void		        error_checker(int argc, char **argv);
void		        backwards_lists_5(t_list *l_a, t_list *l_b);
void		        backwards_lists_4(t_list *l_a, t_list *l_b);
void		        back_wards_lists_3(t_list *l_a, t_list *l_b);
void				sa(t_list *lst);
void				sb(t_list *lst);
void				ss(t_list *l_a, t_list *l_b);
void				pa(t_list *l_a, t_list *l_b);
void				pb(t_list *l_a, t_list *l_b);
void				ra(t_list *lst);
void				rb(t_list *lst);
void				rr(t_list *l_a, t_list *l_b);
void				rra(t_list *lst);
void				rrb(t_list *lst);
void				rrr(t_list *l_a, t_list *l_b);
void				push_swap(t_list *l_a, t_list *l_b);
void                error(void);
void                ok(void);
void                ko(void);
void	            show_usage(void);
void                error_check(char **str);
void	            smallest_first(t_list *lst);

#endif

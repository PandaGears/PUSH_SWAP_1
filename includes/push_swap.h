/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrossouw <hrossouw@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:29:36 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/04 19:54:52 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

# define HEADA      l_a->head->data
# define NEXTA      l_a->head->next->data
# define NEXEXTA   l_a->head->next->next->data
# define TAILA      l_a->tail->data
# define PREVA      l_a->tail->prev->data
# define PREVEVA    l_a->tail->prev->prev->data

# define HEADB      l_b->head->data
# define NEXTB      l_b->head->next->data
# define NEXTEXTB   l_b->head->next->next->data
# define TAILB      l_b->tail->data
# define PREVB      l_b->tail->prev->data
# define PREVEVB    l_b->tail->prev->prev->data

int					is_sort(t_list *l_a, t_list *l_b);
int					is_not_digit(char *str);
int					checkup(int argc, char **argv);
int					is_list(t_list *lst);
void				error_checker(int argc, char **argv);

void	            algos_backwards(int len, t_list *list_a, t_list *list_b);
void                backwards_5(t_list *l_a, t_list *l_b);
void	            rand_1(t_list *l_a, t_list *l_b);
void	            a_list_5(t_list *l_a, t_list *l_b);
void				checker_r(t_list *l_a, t_list *l_b);
void				bubble_sorter(t_list *lst, int size);
void				list_5(t_list *l_a, t_list *l_b);
void				list_4(t_list *l_a, t_list *l_b);
void				list_3(t_list *l_a);
void				list_100(t_list *l_a, t_list *l_b);

void				swap(t_list *lst);
void				rotate(t_list *lst);
void				reverse_rotate(t_list *lst);
void				push(t_list *l_a, t_list *l_b);

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

void				rrr_print(t_list *l_a, t_list *l_b);
void				rra_print(t_list *l_a);
void				rrb_print(t_list *l_b);
void				rr_print(t_list *l_a, t_list *l_b);
void				ra_print(t_list *l_a);
void				rb_print(t_list *l_b);
void				sa_print(t_list *l_a);
void				sb_print(t_list *l_b);
void				ss_print(t_list *l_a, t_list *l_b);
void				pa_print(t_list *l_a, t_list *l_b);
void				pb_print(t_list *l_a, t_list *l_b);

void				print_list(t_list *l_a, t_list *l_b);
void				push_swap(t_list *l_a, t_list *l_b);
void				error(void);
void				ok(void);
void				ko(void);
void				show_usage(void);
void				error_check(char **str);
void				smallest_first(t_list *lst);

void				order_opt(t_list *l_b);
void				pb_opt(t_list *l_a, t_list *l_b);
void				front_sort(t_list *l_a, t_list *l_b);
void				back2_sort(t_list *l_a, t_list *l_b);
void				back_sort(t_list *l_a, t_list *l_b);
void				l_a_sort(t_list *lst);
void				optimization(int len, t_list *l_a, t_list *l_b);
void				quicksort(t_list *l_a, t_list *l_b);
void				decisions(int length, t_list *l_a, t_list *l_b);

int					choose_pivot(t_list *lst);
int					is_backwards_list(t_list *list_a);

#endif

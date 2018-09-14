/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <tradlof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:31:28 by tradlof           #+#    #+#             */
/*   Updated: 2018/09/14 18:18:39 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

# define ARRLEN(args, ac) ac = 0;while(args[ac])ac++;ac++;

# define HEADA			l_a->head->data
# define NEXTA			l_a->head->next->data
# define NEXEXTA		l_a->head->next->next->data
# define TAILA			l_a->tail->data
# define PREVA			l_a->tail->prev->data
# define PREVEVA		l_a->tail->prev->prev->data

# define HEAD			lst->head->data
# define NEXT			lst->head->next->data
# define NEXEXT			lst->head->next->next->data
# define TAIL			lst->tail->data
# define PREV			lst->tail->prev->data
# define PREVEV			lst->tail->prev->prev->data

# define HEADB    	 	l_b->head->data
# define NEXTB     		l_b->head->next->data
# define NEXEXTB  		l_b->head->next->next->data
# define TAILB      	l_b->tail->data
# define PREVB     		l_b->tail->prev->data
# define PREVEVB   		l_b->tail->prev->prev->data

# define L_A			&push->lst_a.lst
# define L_B			&push->lst_b.lst
# define L_ANEXT		&push->lst_a.lst->next
# define L_BNEXT		&push->lst_b.lst->next


# define RULE(str) 		{rule(&push->lst_a, &push->lst_b, str);ft_putendl(str);continue;}
# define DOUB_RULE(str)	{rule(&push->lst_a, &push->lst_b, str);ft_putendl(str);return(1);}
# define B_L 			(&push->lst_b)
# define A_L			(&push->lst_a)

# define L_AA 			L_A && L_ANEXT
# define L_BB 			L_B && L_BNEXT
# define L_AB 			(L_AA && L_BB)
# define ABV 			bottom_l(A_L)
# define BBV 			bottom_l(B_L)
# define HI_V(list) 	biggest_num_l(list)
# define LO_V(list)		lowest_num_l(list)
# define RANGE() 		(sect * ((ft_list_size(A_L) + ft_list_size(B_L)) / parts))
# define BHP(value) 	(find_pos(B_L, value))
# define NEWH(list) 	(biggest_under_l(list, HI_V(list)))


int						is_sorted_list(t_list *l_a);
int						is_sort(t_list *l_a, t_list *l_b);
int						is_not_digit(char *str);
int						dup_check(int argc, char **argv);
int						is_list(t_list *lst);
void					error_checker(int argc, char **argv);
void					error(void);
void					ok(void);
void					ko(void);
void					show_usage(void);

void					algos_backwards(int len, t_list *list_a, \
	t_list *list_b);
void					checker_r(t_list *l_a, t_list *l_b);
void					bubble_sorter(t_list *lst, int size);
void					print_stacks(t_list *l_a, t_list *l_b);

void					larger(int len, t_list *l_a, t_list *l_b);
void					midder(int len, t_list *list_a, t_list *list_b);
void					lesser(int len, t_list *l_a, t_list *l_b);
void					list_4(int len, t_list *l_a, t_list *l_b);
void					list_3(t_list *l_a);
void					list_2(t_list *l_a);

void					swap(t_list *lst);
void					rotate(t_list *lst);
void					reverse_rotate(t_list *lst);
void					push(t_list *l_a, t_list *l_b);

void					sa(t_list *lst);
void					sb(t_list *lst);
void					ss(t_list *l_a, t_list *l_b);
void					pa(t_list *l_a, t_list *l_b);
void					pb(t_list *l_a, t_list *l_b);
void					ra(t_list *lst);
void					rb(t_list *lst);
void					rr(t_list *l_a, t_list *l_b);
void					rra(t_list *lst);
void					rrb(t_list *lst);
void					rrr(t_list *l_a, t_list *l_b);
void					rrr_print(t_list *l_a, t_list *l_b);
void					rra_print(t_list *l_a);
void					rrb_print(t_list *l_b);
void					rr_print(t_list *l_a, t_list *l_b);
void					ra_print(t_list *l_a);
void					rb_print(t_list *l_b);
void					sa_print(t_list *l_a);
void					sb_print(t_list *l_b);
void					ss_print(t_list *l_a, t_list *l_b);
void					pa_print(t_list *l_a, t_list *l_b);
void					pb_print(t_list *l_a, t_list *l_b);
void					rrr_l(t_listdata *a, t_listdata *b);
void					rr_l(t_listdata *a, t_listdata *b);
void					ss_l(t_listdata *a, t_listdata *b);
void					sb_l(t_listdata *b);
void					pb_l(t_listdata *a, t_listdata *b);
void					rb_l(t_listdata *b);
void					rrb_l(t_listdata *b);
void					sa_l(t_listdata *a);
void					pa_l(t_listdata *a, t_listdata *b);
void					ra_l(t_listdata *a);
void					rra_l(t_listdata *a);

void					smallest_first_fifth(int len, t_list *l_a, t_list *l_b);
void					smallest_first(int len, t_list *l_a);
void					biggest_first(int len, t_list *list);

void					decisions(t_list *l_a, t_list *l_b);
void					combo_2a(t_list *lst);
void					combo_1a(t_list *lst);
int						find_val_limit(int len, int smallest, t_list *list);
int						is_biggest_pos(t_list *lst);
int						is_smallest_pos(t_list *l_a);
int						is_minimum(t_list *lst);
int						is_maximum(t_list *l_a);
void					half_path_a(int len, t_list *l_a, int pos);
void					half_path_b(int len, t_list *l_b, int pos);
int						choose_pivot(t_list *lst);
int						is_backwards_list(t_list *list_a);
int						half_list(int len);
int						fifth_list(int len);
void					move_up_a(int smallest, int len, \
int 	smallest_pos, t_list *lst);
void					move_up_b(int size, int len, int pos, t_list *lst);
int						find_list_length(t_list *list);
t_list					*get_args(int len, char **argv);
void					print_stacks(t_list *la, t_list *lb);
void					push_list(t_listdata *list, int val);
void					tmplist(t_listdata *tmp, int size);
int						find_pos(t_listdata *list, int val);

t_list					*new_node(int value);
t_listdata				normalize(t_listdata *tmp, int size, t_listdata *lst_a);

int						biggest_under_l(t_listdata *list, int val);
int						biggest_num_l(t_listdata *list);
int						lowest_num_l(t_listdata *list);
int						bottom_l(t_listdata *list);
int						check_largest_l(t_listdata *stack);
int						is_backward_l(t_listdata *a);
int						is_sorted_list_l(t_listdata *a);
void					rule(t_listdata *a, t_listdata *b, char *line);
int						move(t_listdata *list, int val);
void					free3(t_listdata *list);
void					secondhighest(t_push *push);
void					execute(t_push *push);
void					piece_up(t_push *push);
void					partition(t_push *push);
void					rotate_b(t_push *push, int i);
void					rotateb(t_push *push, int pos, int halfstack);
void					backtoa(t_push *push);
void					pushbacktoa(t_push *push);
void					rotate_a_end(t_push *push);
int						checkdoublerule(t_push *push);

#endif

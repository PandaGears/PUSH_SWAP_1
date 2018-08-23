/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:03:38 by tradlof           #+#    #+#             */
/*   Updated: 2018/08/14 07:00:36 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 1

# include <limits.h>
# include <stdarg.h>
# include <wchar.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <stdio.h>

# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

typedef struct			s_gnl
{
	char				*text;
	char				*tempo;
	struct s_gnl		*next;
	int					fd;
}						t_gnl;

typedef struct			s_node
{
	int					data;
	struct s_node		*next;
	struct s_node		*prev;
}						t_node;

typedef struct			s_list
{
	size_t				len;
	struct s_list		*node;
	struct s_list		*prev;
	struct s_list		*data;
	void				*content;
	size_t				content_size;
	struct s_list		*next;
	t_node				*head;
	t_node				*tail;
}						t_list;

typedef unsigned char	t_byte;

typedef struct			s_precision
{
	int					actif;
	int					len;
}						t_precision;

typedef struct			s_env
{
	const char			*str;
	size_t				cur;
	char				flag[5];
	int					size;
	int					dot;
	int					precision;
	char				modif[6];
	char				conv;
	size_t				printcar;
	int					len;
	int					ret;
	void				*argum;
}						t_env;

int						ft_list_is_head(t_list *lst);
int						ft_list_is_single(t_list *lst);
size_t					ft_list_size(t_list *begin_list);

t_list					*ft_create_elem(void *content);
t_list					*ft_lstnew(void const *content,
		size_t content_size);
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_list_last(t_list *begin_list);
t_list					*ft_list_push_params(int ac, char **av);
t_list					*ft_list_at(t_list *begin_list, unsigned int nbr);
t_list					*ft_list_find(t_list *begin_list, void *data_ref,
		int (*cmp)());
t_list					*ft_list_sort(t_list *lst, int (*cmp)());
t_list					*ft_list_new(void);
t_list					*ft_list_append(t_list *lst, int value);
t_list					*ft_list_prepend(t_list *lst, int value);
t_list					*ft_list_del(t_list *lst, t_node *node);

void					ft_print_list(t_list *lst);
void					ft_list_clear(t_list **begin_list);
void					ft_lstdelone(t_list **alst,
		void (*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *newer);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void					ft_list_disconnect(t_list *src);
void					ft_list_moveto_next(t_list *src, t_list *dest);
void					ft_list_moveto_prev(t_list *src, t_list *dest);
void					ft_list_swap(t_list *a, t_list *b);
void					ft_list_add_next(t_list *newer, t_list *dest);
void					ft_list_add_prev(t_list *newer, t_list *dest);
void					ft_list_push_back(t_list **begin_list, void *content);
void					ft_list_push_front(t_list **begin_list, void *data);

void					ft_list_reverse(t_list **begin_list);
void					ft_list_foreach(t_list *begin_list, void (*f)(void *));
void					ft_list_foreach_if(t_list *begin_list,
		void (*f)(void *), void *content_ref, int (*cmp)());
void					ft_list_remove_if(t_list **begin_list,
		void *content_ref, int (*cmp)());
void					ft_list_merge(t_list **begin_list1,
		t_list *begin_list2);

void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, const void *src,
		int c, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);

void					ft_strfill(char **tab, const char *s, char c);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));

unsigned int			ft_strcount(const char *s, char c);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
size_t					ft_llintlen(long long int n);
size_t					ft_strlenc(const char *s, char c);
size_t					ft_strlen(const char *s);
size_t					ft_strlcat(char *dst, const char *src, size_t size);

char					*ft_strncat(char *s1, const char *s2, size_t n);
char					*ft_stralloc(const char *s);
char					*ft_strallocc(const char *s, char c);
char					*ft_stpcpy(char *dst, const char *src);
char					*ft_stpcpyc(char *dst, const char *src, char c);
char					*ft_strqdupc(const char **s1, char c);
char					*ft_strdup(const char *s1);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *word, const char *tofind);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
char					*ft_strnew(size_t size);
char					**ft_strnew_double(size_t x, size_t y);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
		char (*f)(unsigned int, char));
char					*ft_strsub(char const *s,
		unsigned int start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);

void    				ft_swap(int *a, int *b);
char					*ft_itoa(int n);
int						ft_atoi(const char *str);

int						ft_countwords(char const *str, char c);
int						get_next_line(const int fd, char **line);

void					ft_putchar(char c);
void					ft_putstr(char const *str);
void					ft_putendl(char const *str);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);

int						ft_pivot(int i, int j);
int						ft_isspace(int c);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_islower(int c);
int						ft_isupper(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:45:30 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/30 17:45:32 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_strclen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		w_len;
	int		w_count;
	int		i;
	char	**full;

	i = 0;
	if (!s)
		return (NULL);
	w_count = ft_amount_of_words(s, c);
	full = (char**)malloc(sizeof(char*) * (w_count + 1));
	if (!full)
		return (NULL);
	while (*s == c)
		s++;
	while (*s)
	{
		w_len = ft_strclen(s, c);
		full[i++] = ft_strsub(s, 0, w_len);
		s += w_len;
		while (*s && *s == c)
			s++;
	}
	full[i] = NULL;
	return (full);
}
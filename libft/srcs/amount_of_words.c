#include "../includes/libft.h"

int		ft_amount_of_words(char const *s, char c)
{
	size_t	num_words;
	size_t	i;

	i = 0;
	num_words = 0;
	if (s[i] && (s[i] != c) && (s[i + 1] != c) && (s[i + 1] != 0))
		num_words++;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != 0))
			num_words++;
		i++;
	}
	return (num_words);
}
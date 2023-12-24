/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:47:24 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/18 14:47:39 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = 0;
	if (*s == '\0')
		return (0);
	while (*(s + i) == c)
		i++;
	while (*(s + i))
	{
		if (*(s + i) == c && *(s + i + 1) != c)
			words++;
		i++;
	}
	if (*(s + i - 1) != c)
		words++;
	return (words);
}

void	free_array(char **array, int k)
{
	while (k >= 0)
	{
		free(array[k]);
		k--;
	}
	free(array);
}

static char	*alloc_words(char const *s, char c, char **array, int words)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (k < words)
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		array[k] = ft_substr(s, i - j, j);
		if (array[k] == NULL)
		{
			free_array(array, k);
			return (NULL);
		}
		k++;
	}
	array[k] = NULL;
	return ((char *) '1');
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
	int		i;

	i = 0;
	words = count_word(s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (alloc_words(s, c, array, words) == NULL)
		return (NULL);
	return (array);
}

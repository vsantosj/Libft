/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:02:13 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/22 20:36:21 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **s, size_t n)
{
	while (n > 0)
	{
		n--;
		free(s[n]);
	}
	free(s);
	return (NULL);
}

static size_t	count_words(char const	*s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static size_t	count_word(char const	*s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		qtd_words;
	size_t		i;

	if (!s)
		return (NULL);
	qtd_words = count_words(s, c);
	result = ft_calloc(sizeof(char *), qtd_words + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < qtd_words)
	{
		while (*s == c)
			s++;
		result[i] = ft_calloc(sizeof(char), count_word(s, c) + 1);
		if (!result[i])
			return (free_all(result, i));
		ft_strlcpy(result[i], s, count_word(s, c) + 1);
		s += count_word(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

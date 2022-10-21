/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:05:07 by rukkyaa           #+#    #+#             */
/*   Updated: 2022/10/21 19:01:18 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_nb_words(char const *s, char c)
{
	unsigned int	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s ++;
		if (*s && *s != c)
		{
			words ++;
			while (*s && *s != c)
				s ++;
		}
	}
	return (words);
}

static char	*strdup_modif(char const *s, char c)
{
	char			*dup;
	unsigned int	duplen;
	unsigned int	i;

	duplen = 0;
	while (s[duplen] && s[duplen] != c)
		duplen ++;
	dup = malloc((duplen + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = -1;
	while (++i < duplen)
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	nb_words;
	unsigned int	i;

	i = 0;
	nb_words = get_nb_words(s, c);
	split = malloc((nb_words + 1) * sizeof(char *));
	split[nb_words] = '\0';
	while (i < nb_words)
	{
		while (*s && *s == c)
			s ++;
		split[i] = strdup_modif(s, c);
		while (*s && *s != c)
			s ++;
		i ++;
	}
	return (split);
}

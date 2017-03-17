/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 00:50:41 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:21:58 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_separator(char a, char c)
{
	if (a == c)
		return (1);
	if (a == '\0')
		return (1);
	return (0);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1], c) == 1
		&& char_is_separator(str[i], c) == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char const *from, char c)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], c) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	write_split(char **split, char const *str, char c)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], c) == 0)
				j++;
			split[word] = (char*)malloc(sizeof(char) * (j + 1));
			if (split)
			{
				write_word(split[word], &str[i], c);
				i = i + j;
				word++;
			}
		}
	}
}

char		**ft_strsplit(char const *str, char c)
{
	char	**split;
	int		words;

	if (!str)
		return (NULL);
	words = count_words(str, c);
	split = (char**)malloc(sizeof(char*) * (words + 1));
	if (split == NULL)
		return (NULL);
	split[words] = 0;
	write_split(split, str, c);
	return (split);
}

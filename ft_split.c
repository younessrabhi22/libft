/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:51:10 by yrabhi            #+#    #+#             */
/*   Updated: 2025/11/04 13:44:31 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	free_alloc(char **word, size_t j)
{
	while (j > 0)
	{
		j--;
		free(word[j]);
	}
	free(word);
}

static int	words_alloc(char **word, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
			size++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			word[j] = malloc(size + 1);
			if (!word[j])
			{
				free_alloc(word, j);
				return (0);
			}
			j++;
			size = 0;
		}
		i++;
	}
	return (1);
}

static void	fill_arr(char **word, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word[j][k] = s[i];
			k++;
		}
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			word[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	word[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!words_alloc(arr, s, c))
		return (NULL);
	fill_arr(arr, s, c);
	return (arr);
}

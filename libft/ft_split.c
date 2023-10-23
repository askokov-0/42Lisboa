/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:11:07 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/23 16:35:11 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/

static int	ft_word_count(const char *str, char c)
{
	int	i;
	int	wd;

	i = 0;
	wd = 0;
	while (str[i] != 0)
	{
		if (str[i] != c)
		{
			wd++;
			while (str[i] != c && str[i] != 0)
				i++;
			if (str[i] == 0)
				return (wd);
		}
		i++;
	}
	return (wd);
}

static char	*ft_word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

// static int	free_split(char **split, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i <= len)
// 	{
// 		free(split[i]);
// 		i++;
// 	}
// 	free(split);
// 	return (NULL);
// }

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**arr;

	if (!s)
		return (NULL);
	arr = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			arr[j++] = ft_word_dup(s, start, i);
			start = -1;
		}
		i++;
	}
	return (arr);
}

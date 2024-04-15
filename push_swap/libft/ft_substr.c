/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:24:24 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/25 17:51:29 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	end;
	size_t	slen;
	size_t	i;
	size_t	j;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	end = 0;
	if (start < slen)
		end = slen - start;
	if (end > slen)
		end = 0;
	if (end > len)
		end = len;
	sub = malloc((end + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		sub[j++] = s[i++];
	sub[j] = 0;
	return (sub);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:17 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/09 18:19:54 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	sub;

	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != 0)
	{
		sub = 0;
		while (big[i + sub] == little[sub] && (i + sub) < len)
		{
			if (big[i + sub] == 0 && little[sub] == 0)
				return ((char *)big + i);
			sub++;
		}
		if (little[sub] == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

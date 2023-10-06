/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:17 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/06 12:47:33 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t sub;

	if (!little)
		return ((char *)big);
	i = 0;
	while (big[i] != 0 && (i + sub) < len)
	{
		sub = 0;
		if (big[i + sub] == little[sub])
		{
			if (little[sub] == 0)
				return ((char *)little);
			sub++;
		}
		i++;
	}
	return (NULL);
}
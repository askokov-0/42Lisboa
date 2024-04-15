/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:45:42 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/06 18:48:07 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (!str1 && !str2)
		return (NULL);
	if (str1 > str2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			*(unsigned char *)(str1 + i) = *(const unsigned char *)(str2 + i);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(str1 + i) = *(const unsigned char *)(str2 + i);
			i++;
		}
	}
	return (str1);
}

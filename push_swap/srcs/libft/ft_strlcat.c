/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:32:56 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/09 18:14:41 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] != 0 && len < size)
		len++;
	while (src[i] != 0 && (len + i + 1) < size)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (len < size)
		dest[len + i] = 0;
	return (len + ft_strlen(src));
}

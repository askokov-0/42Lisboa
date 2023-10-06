/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:32:56 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/05 17:27:37 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	len = ft_strlen(dest);
	if (!dest || !src)
		return (0);
	i = 0;
	while (src[i] != 0 && i < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = 0;
	return (len + ft_strlen(src));
}
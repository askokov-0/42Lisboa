/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:51:05 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/09 18:12:57 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(str) + 1);
	if (!dup)
		return (0);
	ft_memcpy(dup, str, ft_strlen(str) + 1);
	return (dup);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:51:05 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/06 17:47:04 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *dup;
	int i;

	dup = (char *)malloc(sizeof(str) * sizeof(char));
	i = 0;
	while (str[i] != 0)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
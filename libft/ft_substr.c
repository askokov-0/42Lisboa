/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:24:24 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/09 18:39:31 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;

    if (len == 0)
        return NULL;
    if (start < 0)
    {
        i = ft_strlen(s) - start;

    }
    else
    {
        i = start;

    }
}
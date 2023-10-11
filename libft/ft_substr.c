/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:24:24 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/11 16:07:44 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *sub;

    if (len >= 4294967295)
        len = 4294967295;
    if (!s || !(sub = (char *)malloc((len + 1))))
        return NULL;
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
        sub[j++] = s[i++];
    sub[j] = 0;
    return (sub);
}
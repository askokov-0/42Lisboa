/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:22:54 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/11 11:29:22 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *str;

    i = 0;
    j = 0;
    if((!s1 && !s2) || !(str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1)))
        return NULL;
    while(s1[j] != 0)
        str[i++] = s1[j++];
    j = 0;
    while (s2[j] != 0)
        str[i++] = s2[j++];
    str[i] = 0;
    return (str);
}
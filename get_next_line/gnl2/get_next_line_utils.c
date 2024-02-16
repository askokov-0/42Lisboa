/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:08:05 by askokov-          #+#    #+#             */
/*   Updated: 2024/02/16 15:58:37 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str && str[i] && str[i] != '\n')
        i++;
    if (str && str[i] == '\n')
        i++;
    return (i);
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *join;
    int     i;
    int     j;

    join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!join)
        return (NULL);
    i = 0;
    while (s1 && s1[i])
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2 && s2[j] && s2[j] != '\n')
    {
        join[i + j] = s2[j];
        j++;
    }
    if (s2 && s2[j] == '\n')
        join[i + j++] = '\n';
    join[i + j] = 0;
    free(s1);
    return (join);
}

void    ft_cleanBuf(char *buf)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (buf[i] && buf[i] != '\n')
    {
        buf[i] = 0;
        i++;
    }
    if (buf[i] == '\n')
    {
        buf[i] = 0;
        i++;
        while (buf[i])
        {
            buf[j] = buf[i];
            buf[i] = 0;
            i++;
            j++;
        }
    }
}
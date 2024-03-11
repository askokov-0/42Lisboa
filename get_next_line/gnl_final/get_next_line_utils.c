/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:56:00 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/05 15:32:04 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] && str[i] != '\n')
        i++;
    if (str[i] == '\n')
        i++;
    return (i);
}

char    *ft_strjoin(char *str, char *str2)
{
    int i;
    int j;
    char    *join;

    join = malloc(ft_strlen(str) + ft_strlen(str2) + 1);
    if (!join)
        return (NULL);
    i = 0;
    while (str && str[i])
    {
        join[i] = str[i];
        i++;
    }
    j = 0;
    while (str2 && str2[j] != '\n' && str2[j])
    {
        join[i + j] = str2[j];
        j++;
    }
    if (str2[j] == '\n')
        join[i + j++] = '\n';
    join[i + j] = 0;
    return (join);
}


void    ft_cleanBuf(char *buf)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < BUFFER_SIZE && buf[i] != '\n')
    {
        buf[i] = 0;
        i++;
    }
    if (buf[i] == '\n')
    {
        buf[i] = 0;
        i++;
        while (i < BUFFER_SIZE)
        {
            buf[j] = buf[i];
            buf[i] = 0;
            i++;
            j++;
        }
    }
}
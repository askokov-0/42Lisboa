/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:39:03 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/11 15:39:28 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int ft_strlen(char *str)
{
    int i;
    
    while (str[i] != '\n' && str[i] != 0)
        i++;
    if (str[i] == '\n')
        i++;
    return (i);
}

char    *ft_strjoin(char *line, char *buf)
{
    int i;
    int j;
    char    *join;
    
    join = malloc(ft_strlen(line) + ft_strlen(buf) + 1);
    if (!join)
        return (NULL);
    i = 0;
    j = 0;
    while (line && line[i])
    {
        join[i] = line[i];
        i++;
    }
    while (buf[j] != '\n' && buf[j] != 0)
    {
        join[i + j] = buf[j];
        j++;
    }
    if (buf[j] == '\n')
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
    while (i < BUFFER_SIZE && buf[i] != 0)
        buf[i++] = 0;
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
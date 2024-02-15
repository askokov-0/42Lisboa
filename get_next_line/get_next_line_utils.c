/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:58 by askokov-          #+#    #+#             */
/*   Updated: 2024/02/15 13:32:12 by askokov-         ###   ########.fr       */
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

char    *ft_strjoin(char *line, char *buf)
{
    int i;
    int j;
    char *join;

    join = malloc(ft_strlen(line) + ft_strlen(buf) + 1);
    if (!join)
        return (NULL);
    i = 0;
    j = 0;
    while (line && line[i] != 0)
    {
        join[i] = line[i];
        i++;
    }
    while (buf && buf[j] != 0 && buf[j] != '\n')
    {
        join[i + j] = buf[j];
        j++;
    }
    if (buf && buf[j] == '\n')
        join[i + j++] = '\n';
    join[i + j] = 0;
    if (line)
        free(line);
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

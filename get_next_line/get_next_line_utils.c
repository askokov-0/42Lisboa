/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:58 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/22 16:38:03 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *line, char *buf)
{
    int i;
    int j;
    char *join;

    if (!line)
    {
        line = ft_strdup(buf);
        return (line);
    }
    join = malloc(ft_strlen(line) + ft_strlen(buf) + 1);
    if (!join)
        return (NULL);
    i = 0;
    j = 0;
    while (line[j] != 0)
        join[i++] = line[j++];
    j = 0;
    while (buf[i] != '\n' && buf[j] != 0)
        join[i++] = buf[j++];
    if (buf[i] == '\n')
        join[i + j++] = '\n';
    join[i + j] = 0;
    if (line)
        free(line);
    return (join);
}

int ft_checknl(char *line)
{
    int i;

    i = 0;
    while (line[i])
    {
        if (line[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

char    *ft_nextLine(char *stash, char *line)
{
    int lineSize;
    int i;
    
    i = 0;
    lineSize = 0;
    while (stash[lineSize] != '\n' && stash[lineSize] != '\0')
        lineSize++;
    line = malloc(lineSize + 2);
    if (!line)
        return (NULL);
    while (i != lineSize + 1)
    {
        line[i] = stash[i];
        i++;
    }
    line[i] = 0;
    return (line);
}

char    *ft_cleanBuf(char *buf)
{
    int i;
    int j;

    while (i < BUFFER_SIZE && buf[i] != '\n')
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

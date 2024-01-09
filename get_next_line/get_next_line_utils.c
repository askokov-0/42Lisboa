/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:58 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/09 16:56:59 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != 0)
        i++;
    return (i);
}

char    *ft_strjoin(char *stash, char *buf)
{
    int i;
    int j;
    char *join;

    if (!buf)
        return (NULL);
    join = malloc(ft_strlen(stash) + ft_strlen(buf) + 1);
    if (!join)
        return (NULL);
    i = 0;
    j = 0;
    while (stash[j] != 0)
        join[i++] = stash[j++];
    j = 0;
    while (buf[j] != 0)
        join[i++] = buf[j++];
    join[i] = 0;
    return (join);
}

int ft_checknl(char *stash)
{
    int i;

    while (stash[i] != 0)
    {
        if (stash[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

char    *ft_nextLine(char  *stash, char    *line)
{
    int lineSize;
    int i;
    
    i = 0;
    while (stash[lineSize] != '\n')
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

char    *ft_cleanStash(char *stash)
{
    int lineSize;
    int i;
    char    *clean;

    i = 0;
    lineSize = 0;
    while (stash[lineSize] != '\n')
        lineSize++;
    while (stash[i] != 0)
        i++;
    clean = malloc((i - lineSize) * sizeof(char));
    if (!clean)
        return (NULL);
    i = 0;
    while (stash[lineSize] != 0)
        clean[i++] = stash[++lineSize];
    clean[i] = 0;
    return (clean);
}
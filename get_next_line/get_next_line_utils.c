/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:58 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/18 15:51:40 by askokov-         ###   ########.fr       */
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
    while (buf[j] != 0)
        join[i++] = buf[j++];
    join[i] = 0;
    free(line);
    return (join);
}

int ft_checknl(char *stash)
{
    int i;

    i = 0;
    while (stash[i])
    {
        if (stash[i] == '\n')
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

char    *ft_cleanStash(char *stash)
{
    int lineSize;
    int i;
    char    *clean;

    i = 0;
    lineSize = 0;
    while (stash[lineSize] != '\n')
        lineSize++;
    clean = malloc((ft_strlen(stash) - lineSize) * sizeof(char));
    if (!clean)
        return (NULL);
    i = 0;
    while (stash[lineSize] != 0)
        clean[i++] = stash[++lineSize];
    clean[i] = 0;
    return (clean);
}

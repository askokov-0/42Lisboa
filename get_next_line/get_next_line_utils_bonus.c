/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:58:10 by askokov-          #+#    #+#             */
/*   Updated: 2024/02/15 15:29:40 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int ft_strlen(char  *str)
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
    char    *join;
    int i;
    int j;

    join = malloc(ft_strlen(line) + ft_strlen(buf) + 1);
    if (!join)
    {
        free(line);
        return (NULL);
    }
    i = 0;
    while (line && line[i])
    {
        join[i] = line[i];
        i++;
    }
    j = -1;
    while ((++j >= 0) && buf[j] != '\n' && buf[j])
        join[i + j] = buf[j];
    if (buf && buf[j] == '\n')
        join[i + j++] = '\n';
    join[i + j] = 0;
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
        buf[i++] = 0;
    if (buf[i] == '\n')
    {
        buf[i] = 0;
        i ++;
        while (i < BUFFER_SIZE)
        {
            buf[j] = buf[i];
            buf[i] = 0;
            i++;
            j++;
        }
    }
}
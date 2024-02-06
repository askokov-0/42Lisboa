/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:51:37 by askokov-          #+#    #+#             */
/*   Updated: 2024/02/06 17:15:59 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char    *get_next_line(int fd)
{
    static char    buf[FOPEN_MAX][BUFFER_SIZE + 1];
    char    *line;
    int i;
    
    i = 0;
    if (read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
    {
        while (i <= BUFFER_SIZE)
            buf[0][i++] = 0;
        return (NULL);
    }
    
    line = NULL;
    while (buf[0] || read(fd, buf, BUFFER_SIZE))
    {
        line = ft_strjoin(line, buf);
        ft_cleanBuf(buf);
        if (line[ft_strlen(line) - 1] == '\n')
            return (line);
    }
    return (line);
}

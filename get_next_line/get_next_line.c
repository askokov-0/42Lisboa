/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:34 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/22 16:06:25 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
    static char    buf[BUFFER_SIZE];
    char    *line;
    int i;
 
    while (buf[0] || read(fd, buf, BUFFER_SIZE))
    {
        line = ft_strjoin(line, buf);
        ft_cleanBuf(buf);
        if (ft_checknl(line) == 1)
            return (line);
    }
    return (line);
}

int main()
{
    int fd;
    int i;

    fd = open("test.txt", O_RDONLY);
    i = 0;
    while (i < 3)
    {
        printf("NEW LINE!!!!: %s\n", get_next_line(fd));
        i++;
    }
}
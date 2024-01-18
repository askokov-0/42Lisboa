/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:34 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/18 16:03:22 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char    *ft_strdup(char *buf)
{
    int i;
    char    *dup;

    dup = malloc((ft_strlen(buf) + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    while (buf[i])
        dup[i++] = buf[i];
    return (dup);
}

char *get_next_line(int fd)
{
    static char    buf[BUFFER_SIZE];
    char    *stash;
    char    *line;
    char    *temp;
    int result;

    printf("read:%d\n", result = read(fd, buf, BUFFER_SIZE)); 
    line = NULL;
    if (BUFFER_SIZE <= 0)
        return (NULL);

    while (ft_checknl(stash) == 0 && result > 0)
    {
        printf("read2:%d\n", result = read(fd, buf, BUFFER_SIZE)); 
        printf("buf1: %s\n", buf);
        stash = ft_strjoin(stash, buf);
        printf("stash2: %s\n", stash);
    }
    if (ft_checknl(stash) == 1)
    {
        line = ft_nextLine(stash, line);
        printf("line: %s\n", line);
        stash = ft_cleanStash(stash);
    }
    printf("laststash:%s\n", stash);
    if (ft_checknl(stash) == 0 && result == 0)
        return (stash);
    while (buf[0] || read(fd, buf, BUFFER_SIZE))
    {
        line = ft_strjoin(line, buf);
        if ()
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
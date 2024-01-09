/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:34 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/09 16:59:50 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char    buf[BUFFER_SIZE];
    char static    *stash;
    char    *new_stash;
    char    *line;
    char    *temp;

    // read file
    read(fd, buf, BUFFER_SIZE);

    // buf to stash
    new_stash = ft_strjoin(stash, buf);
    free(stash);
    stash = new_stash;

    if (ft_checknl(stash))
    {
        line = ft_nextLine(stash, line);
        temp = ft_cleanStash(stash);
        free(stash);
        stash = temp;
        return (line);
    }
    else
        return (NULL);
}

int main(void)
{
    int fd;

    fd = open("./test.txt", O_RDONLY);
}
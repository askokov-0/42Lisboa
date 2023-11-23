/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:34 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/23 15:24:58 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static int CLine;
    char *line;

    if (!fd)
        return (NULL);
    line = malloc(BUFFER_SIZE + 1);
    if (!line)
        return (NULL);
    read(fd, line, BUFFER_SIZE);
    return (line)
}
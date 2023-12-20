/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:40:34 by askokov-          #+#    #+#             */
/*   Updated: 2023/12/20 15:08:45 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char    *buf;

    buf = malloc(BUFFER_SIZE * sizeof(char));

    // read file
    read(fd, buf, BUFFER_SIZE);

    // buf to stash
    
    // check stash for nl

    // change from stash to line and clean stash

}
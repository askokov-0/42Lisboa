/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:54:09 by askokov-          #+#    #+#             */
/*   Updated: 2024/02/15 13:13:35 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char    *get_next_line(int fd);

int ft_strlen(char  *str);

char    *ft_strjoin(char *line, char *buf);

void    ft_cleanBuf(char *buf);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:41:14 by askokov-          #+#    #+#             */
/*   Updated: 2024/02/15 13:51:53 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char    *get_next_line(int fd);

int ft_strlen(char *str);

char    *ft_strjoin(char *line, char *buf);

void    ft_cleanBuf(char *buf);

#endif
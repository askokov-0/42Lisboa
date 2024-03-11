/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:01:45 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/05 15:32:03 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 1
#define BUFFER_SIZE 1
#endif

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *get_next_line(int fd);

int ft_strlen(char *str);

char    *ft_strjoin(char *str, char *str2);

void    ft_cleanBuf(char *buf);

#endif
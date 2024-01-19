/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:41:14 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/19 15:53:17 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char    *get_next_line(int fd);

int ft_strlen(char *str);

char    *ft_strjoin(char *line, char *buf);

int ft_checknl(char *line);

char    *ft_cleanStash(char *line);

#endif
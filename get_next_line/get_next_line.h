/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:41:14 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/09 16:58:01 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 15
#endif

#include <stdlib.h>
#include <unistd.h>

char    *get_next_line(int fd);

int ft_strlen(char *str);

char    *ft_strjoin(char *stash, char *buf);

int ft_checknl(char *stash);

char    *ft_nextLine(char  *stash, char    *line);

char    *ft_cleanStash(char *stash);

#endif
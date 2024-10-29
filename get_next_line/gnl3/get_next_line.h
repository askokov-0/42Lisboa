

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#ifndef BUFFER_SIZE 1
#define BUFFER_SIZE 1
#endif

char    *get_next_line(int fd);

int ft_strlen(char *str);

char    *ft_strjoin(char *str, char *str2);

void    ft_cleanBuf(char *buf);

#endif
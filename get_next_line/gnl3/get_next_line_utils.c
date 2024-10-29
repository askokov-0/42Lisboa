

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n' && str[i])
        i++;
    if (str[i] == '\n')
        i++;
    return (i);
}

char    *ft_strjoin(char *str, char *str2)
{
    int i;
    int j;
    char    *join;

     join = malloc(ft_strlen(str) + ft_strlen(str2) + 1);
     if (!join)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i])
    {
        join[i] = str[i];
        i++;
    }
    while (str2[j] != '\n' && str2[j])
    {
        join[i + j] = str2[j];
        j++;
    }
    if (str2[j] == '\n')
        join[i + j++] = '\n';
    join[i + j] = 0;
    return (join);
}

void    ft_cleanBuf(char *buf)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < BUFFER_SIZE && buf[i] != '\n')
    {
        buf[i] = 0;
        i++;
    }
    if (buf[i] == '\n')
    {
        buf[i] = 0;
        i++;
        while (i < BUFFER_SIZE)
        {
            buf[j] = buf[i];
            buf[i] = 0;
            i++;
            j++;
        }
    }
}

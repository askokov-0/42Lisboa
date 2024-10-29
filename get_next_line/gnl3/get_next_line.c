
#include "get_next_line.h"

char    *get_next_line(int fd)
{
    int i;
    char    buf[BUFFER_SIZE + 1];
    char    *line;

    i = 0;
    if (read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
    {
        while (i <= BUFFER_SIZE)
        {
            buf[i] = 0;
            i++;
        }
        return (NULL);
    }
    line = NULL;
    while (buf[0] || read(fd, buf, BUFFER_SIZE) > 0)
    {
        line = ft_strjoin(line, buf);
        ft_cleanBuf(buf);
        if (line[ft_strlen(line) - 1] == '\n')
            return (line);
    }
    return (line);
}

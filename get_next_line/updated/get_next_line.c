/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeleton093 <skeleton093@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:01:01 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/28 23:31:43 by skeleton093      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		while (i <= BUFFER_SIZE)
			buf[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buf[0] || read(fd, buf, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buf);
		ft_cleanbuf(buf);
		if (line[ft_strlen(line) - 1] == '\n')
			return (line);
	}
	return (line);
}

// int main()
// {
// 	int fd = open("a.txt", O_RDONLY);
// 	char *line;

// 	while ((line = get_next_line(fd)))
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// }
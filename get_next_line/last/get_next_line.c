/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:05:24 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/29 13:30:34 by askokov-         ###   ########.fr       */
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

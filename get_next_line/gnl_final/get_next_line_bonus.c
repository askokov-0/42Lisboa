/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:04:13 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/13 14:50:58 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buf[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (read(fd, 0, 0) < 0 || FOPEN_MAX <= fd || BUFFER_SIZE <= 0)
	{
		if (fd > 0 && fd < FOPEN_MAX)
			while (buf[fd][i])
				buf[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buf[fd][0] || read(fd, buf[fd], BUFFER_SIZE))
	{
		line = ft_strjoin(line, buf[fd]);
		ft_cleanbuf(buf[fd]);
		if (line[ft_strlen(line) - 1] == '\n')
			return (line);
	}
	return (line);
}

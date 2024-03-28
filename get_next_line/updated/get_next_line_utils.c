/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:56:00 by askokov-          #+#    #+#             */
/*   Updated: 2024/03/28 15:01:45 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] && str[i] != '\n')
		i++;
	if (str && str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *line, char *buf)
{
	char	*join;
	int		i;
	int		j;

	join = malloc((ft_strlen(line) + ft_strlen(buf) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	while (line && line[i])
	{
		join[i] = line[i];
		i++;
	}
	j = 0;
	while (buf && buf[j] != 0 && buf[j] != '\n')
	{
		join[i + j] = buf[j];
		j++;
	}
	if (buf && buf[j] == '\n')
		join[i + j++] = '\n';
	join[i + j] = 0;
	free(line);
	return (join);
}

void	ft_cleanbuf(char *buf)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buf && buf[i] && buf[i] != '\n')
		buf[i++] = 0;
	if (buf && buf[i] == '\n')
	{
		buf[i++] = 0;
		while (i <= BUFFER_SIZE)
		{
			buf[j++] = buf[i];
			buf[i++] = 0;
		}
	}
}

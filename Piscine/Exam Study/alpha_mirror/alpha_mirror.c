/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:18:41 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/20 23:47:53 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 90 - (str[i] - 65);
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 122 - (str[i] - 97);
		putchar(str[i]);
		i++;

	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:00:17 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/21 19:14:25 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_lw(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
	i--;
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i--;
        while (str[i] > 9 && str[i] < 127)
                i--;
	i++;
        while (str[i] > 9 && str[i] < 127)
        {
                write(1, &str[i], 1);
                i++;
        }
}

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                ft_lw(argv[1]);
        }
        write(1, "\n", 1);
}


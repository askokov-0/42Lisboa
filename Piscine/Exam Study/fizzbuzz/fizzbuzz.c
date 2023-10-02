/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:46:20 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/20 22:08:49 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char ch)
{
	write(1, &ch, 1);
}

void    putnbr(int nb)
{
        int     n;

        n = nb;
        if (nb > 9)
        {
                putnbr(n/10);
                n%=10;
        }
        putchar(n + '0');
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	int	i;
	char	fizz[] = "fizz";
	char	buzz[] = "buzz";

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			putstr(fizz);
			putstr(buzz);
		}
		else if (i % 3 == 0)
			putstr(fizz);
		else if (i % 5 == 0)
			putstr(buzz);
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}

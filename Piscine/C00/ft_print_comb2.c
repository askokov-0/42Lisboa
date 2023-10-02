/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:33:03 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/01 13:47:19 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	c;
	char	d;

	c = 0;
	d = 0;
	while (c <= 98)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_putchar((c / 10) + '0');
			ft_putchar((c % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d / 10) + '0');
			ft_putchar((d % 10) + '0');
			if (c < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

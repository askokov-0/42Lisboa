/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:52:50 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/02 15:18:11 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	top_line(int wid, int x)
{
	if (wid == 0)
	{
		ft_putchar('/');
	}
	else if (wid == x - 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	mid_line(int wid, int x)
{
	if ((wid == 0) || (wid == x - 1))
	{
		ft_putchar('*');
	}
	else 
	{
		ft_putchar(' ');
	}
}

void	bot_line(int wid, int x)
{
	if (wid == 0)
	{
		ft_putchar('\\');
	}
	else if (wid == x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_line(int wid, int hei, int x, int y)
{
	if (hei == 0)
	{
		top_line(wid, x);
	}
	else if (hei == y - 1)
	{
		bot_line(wid, x);
	}
	else
	{
		mid_line(wid, x);
	}
}

void	rush(int x, int y)
{
	int	wid;
	int	hei;

	if ((x > 0) && (y > 0))
	{
		hei = 0;
		while (hei < y)
		{
			wid = 0;
			while (wid < x)
			{
				print_line(wid, hei, x, y);
				wid++;
			}
			ft_putchar('\n');
			hei++;
		}
	}
}

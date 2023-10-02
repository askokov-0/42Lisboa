/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:12:48 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/13 15:35:41 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	y;

	x = nb;
	y = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (y > 1)
	{
		y--;
		x *= y;
	}
	return (x);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(7));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:19:20 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/04 20:49:42 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int	main(void)
{
	int x;
	int y;
	int* ptr;
	int* ptr2;

	ptr = &x;
	ptr2 = &y;
	*ptr = 4;
	*ptr2 = 2;
	ft_ultimate_div_mod(ptr, ptr2);
	printf("%d", x);
	printf("%d", y);
	return (0);
}*/

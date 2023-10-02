/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:45:06 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/04 13:59:35 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;
	int*	ptr;
	int*	ptr2;

	a = 4;
	b = 2;
	ptr = &x;
	ptr2 = &y;
	ft_div_mod(a, b, ptr, ptr2);
	printf("%d", x);
	printf("%d", y);
	return (0);
}*/

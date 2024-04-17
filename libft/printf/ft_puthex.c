/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:43:40 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/17 15:55:22 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long int num, char ch)
{
	char	*base;
	int		counter;

	counter = 0;
	if (ch == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
	{
		counter += ft_puthex(num / 16, ch);
		counter += ft_puthex(num % 16, ch);
	}
	else
	{
		write(1, &base[num], 1);
		counter++;
	}
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:18:39 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/14 14:06:56 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int num)
{
	char	*str;
	int		i;

	i = ft_ulen(num);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (num != 0)
	{
		str[i - 1] = ((num % 10) + 48);
		num /= 10;
		i--;
	}
	return (str);
}

int	ft_printu(unsigned int num)
{
	char	*str;
	int		len;

	len = 0;
	if (num == 0)
	{
		len += ft_putchar('0');
	}
	else 
	{
		str = ft_utoa(num);
		len += ft_putstr(str);
		free(str);
	}
	return (len);
}

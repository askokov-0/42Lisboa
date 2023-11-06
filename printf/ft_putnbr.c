/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:20:05 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/06 14:11:17 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
}

int ft_litoa(long num)
{
    char    *str;
    int neg;
    int len;

    neg = 0;
    len = 0;
    if (num == 0)
        return (0);
    if (num < 0)
        neg = 1;
    str = ft_calloc(11 + neg, sizeof(char));
    if (!str)
        return (NULL);
    while (num > 0)
    {
        str[len++] = (num%10) + 48;
        num /= 10;
    }
    if (neg)
        str[len] = '-';
    ft_strrev(str);
    return (str);
}

int ft_putnbr(long num)
{
    ft_putstr(ft_litoa(num));
    return(ft_strlen(num));
}
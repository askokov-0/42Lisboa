/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:20:05 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/13 16:22:25 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

char *ft_litoa(long num)
{
    char    *str;
    int neg;
    int i;

    neg = 0;
    i = 0;
    if (num == 0)
        return (0);
    if (num < 0)
    {
        neg = 1;
        num = -num;
    }
    str = ft_calloc(11 + neg, sizeof(char));
    if (!str)
        return (NULL);
    while (num > 0)
    {
        str[i++] = (num%10) + 48;
        num /= 10;
    }
    if (neg)
        str[i] = '-';
    ft_strrev(str);
    return (str);
}

int ft_putnbr(long num)
{
    char    *nb;
    int len;

    nb = ft_litoa(num);
    ft_putstr(nb);
    len = ft_strlen(nb);
    free(nb);
    return (len);
}

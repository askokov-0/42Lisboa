/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:10:23 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/18 17:10:37 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pos(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	intlen(int n)
{
	size_t	i;

	i = 1;
	if (n == 0)
		return (2);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	rev(char *str)
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

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		neg;

	neg = (n < 0);
	str = ft_calloc(intlen(n) + neg, sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		str[i++] = '0' + pos(n % 10);
		n = (n / 10);
	}
	if (neg)
		str[i] = '-';
	rev(str);
	return (str);
}

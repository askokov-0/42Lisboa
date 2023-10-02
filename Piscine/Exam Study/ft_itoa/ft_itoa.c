/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:26:29 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/21 20:29:30 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	c;
	char	temp;

	i = 0;
	c = 0;
	while (str[c] != '\0')
		c++;
	c--;
	while (i < c)
	{
		temp = str[i];
		str[i] = str[c];
		str[c] = temp;
		c--;
		i++;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	int	i;
	char	*str;
	int	len;
	int	temp;
	int	neg;

	i = 0;
	neg = 1;
	len = 2;
	temp = nb;
	if (nb < 0)
	{
		len++;
		neg *= -1;
		nb = -nb;
	}
	while (temp /= 10)
		len++;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	else 
	{
		while (len > 1)
		{
			str[i] = (nb % 10) + '0';
			nb /= 10;
			len--;
			i++;
		}
		if (neg < 0)
			str[i - 1] = '-';
		str[i] = '\0';
		str = ft_strrev(str);
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(-5462);
	printf("%s\n", str);
}

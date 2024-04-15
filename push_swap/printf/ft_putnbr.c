/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:20:05 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/14 14:08:48 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	char	*str;
	int		len;

	str = ft_itoa(num);
	ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	return (len);
}

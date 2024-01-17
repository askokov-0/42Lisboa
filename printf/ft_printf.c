/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:43:36 by askokov-          #+#    #+#             */
/*   Updated: 2024/01/17 12:42:23 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strrchr("cspdiuxX%", format[i + 1]))
		{
			counter = ft_print_format(format, list, counter, i);
			i++;
		}
		else
			counter += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (counter);
}

int	main()
{
	ft_printf("String: %s", "This is a string");
	ft_printf("Integer: %d", 1256436);
	ft_printf("Hex: %X", 1256436);
}
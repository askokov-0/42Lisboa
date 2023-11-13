/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:16:23 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/13 15:42:03 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_format(const char *format, va_list list, int counter, int i)
{
    if (format[i + 1] == 'c')
        return (counter += ft_putchar(va_arg(list, int)));
    else if (format[i + 1] == 's')
        return (counter += ft_putstr(va_arg(list, char *)));
    else if (format[i + 1] == 'p')
        return (counter += ft_putptr(va_arg(list, unsigned long long int)));
    else if (format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'u')
        return (counter += ft_putnbr(va_arg(list, long)));
    else if (format[i + 1] == 'x')
        return (counter += ft_puthex(va_arg(list, unsigned int), 'x'));
    else if (format[i + 1] == 'X')
        return (counter += ft_puthex(va_arg(list, unsigned int), 'X'));
    else if (format[i + 1] == '%')
        return (counter += ft_putchar('%'));
    return (counter);
}

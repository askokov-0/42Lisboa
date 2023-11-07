/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:43:36 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/07 16:53:37 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list list;
    int i;
    int counter;

    i = 0;
    va_start(list, format);
    while (format[i])
    {
        if (format[i] == '%' && ft_strrchr("cspdiuxX%", format[i + 1]))
        {
            i++;
            counter += ft_print_format(format[i], list);
            i++;
        }
        else
            counter += ft_putchar(format[i]);
        i++;
    }
    va_end(list);
    return (counter);
}

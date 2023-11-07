/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:16:23 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/07 16:53:36 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_format(char format, va_list list)
{
    if (format == 'c')
        return (ft_putchar(va_arg(list, int)));
    else if (format == 's')
        return (ft_putstr(va_arg(list, char *)));
    else if (format == 'p')
        return (ft_putptr(va_arg(list, )));
    else if (format == 'd' || format == 'i' || format == 'u')
        return (ft_putnbr(va_arg(list, long)));
    else if (format == 'x')
        
    else if (format == 'X')
    else if (format == '%')
}
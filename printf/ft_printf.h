/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:35:14 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/13 14:41:52 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int ft_putstr(char *str);

int ft_putchar(char c);

int ft_printf(const char *, ...);

int ft_putnbr(long num);

int ft_print_format(const char *format, va_list list, int counter, int i);

int ft_puthex(unsigned long long int num, char ch);

int ft_putptr(unsigned long int ptr);

#endif

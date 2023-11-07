/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:35:14 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/07 16:53:37 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include "libft.h"
#include <stdarg.h>

int ft_putstr(char *str);

int ft_putchar(char c);

int ft_printf(const char *, ...);

int ft_putnbr(long num);

int ft_print_format(char format, va_list list);

#endif

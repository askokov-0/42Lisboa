/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:35:14 by askokov-          #+#    #+#             */
/*   Updated: 2024/04/24 15:36:02 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdarg.h>

int	ft_putstr(char *str);

int	ft_putchar(char c);

int	ft_printf(const char *format, ...);

int	ft_putnbr(int num);

int	ft_print_format(const char *format, va_list list, int counter, int i);

int	ft_puthex(unsigned long long int num, char ch);

int	ft_putptr(unsigned long int ptr);

int	ft_printu(unsigned int num);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:53:56 by askokov-          #+#    #+#             */
/*   Updated: 2023/11/13 11:56:05 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(unsigned long int ptr)
{
    int counter;

    counter = 0;
    counter += write(1, "0x", 2);
    counter += ft_puthex(ptr, 'x');
    return (counter);
}
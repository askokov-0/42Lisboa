/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:10:23 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/12 18:29:00 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *rev(char *s)
{
    int i;
    int j;
    char    temp;

    i = 1;
    j = ft_strlen(s);
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
        i++;
    }
    return (s);
}

static  char    *itoa_handling(char *s, int n, int len, int neg)
{
    int i;

    i = 0;
    while (i < len)
    {
        s[i++] = (n % 10) + '0';
        n /= 10;
    }
    if (neg < 0)
        s[i - 1] = '-';
    s[i] = 0;
    s = rev(s);
    return (s);
}

static  char    *max_handle(char *s, int n)
{
    if (n < 0)
        s = "-2147483648";
    else
        s = "2147483647";
    return (s);
}

char    *ft_itoa(int n)
{
    char    *s;
    int temp;
    int neg;
    int len;

    neg = 1;
    temp = n;
    len = 2;
    if (n < 0)
    {
        neg *= -1;
        len++;
        n = -n;
    }
    while (temp /= 10)
        len++;
    if (!(s = malloc(len * sizeof(char))))
        return NULL;
    if (n == 2147483647 || n == -2147483648)
        max_handle(s, n);
    else
        s = itoa_handling(s, n, len, neg);
    return (s);
}

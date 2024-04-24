/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:50:48 by askokov-          #+#    #+#             */
/*   Updated: 2024/04/22 14:58:33 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int error_syntax(char *str_n)
{
    if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
        retunr (1);
    if ((*str_n == '+' || *str_n == '-') && !(str_n[1] >= '0' && str_n[1] <= '9'))
        return (1);
    while (*++str_n)
    {
        if (!(*str_n >= '0' && *str_n <= '9'))
            return (1);
    }
    return (0);
}

int error_duplicate(stack_node *a, int n)
{
    if (!a)
        return (0);
    while (a)
    {
        if (a->nbr == n)
            return (1);
        a = a->next;
    }
    return (0);
}

void free_stack(stack_node **stack)
{
    stack_node *tmp;
    stack_node *current;

    if (!stack)
        return ;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        current->nbr = 0;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}

void free_errors(stack **a)
{
    free_stack(a);
    ft_printf("Error\n");
    exit(1);
}
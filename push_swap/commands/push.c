/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:41:51 by askokov-          #+#    #+#             */
/*   Updated: 2024/04/22 14:41:54 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void push(stack_node **dst, stack_node **src)
{
    stack_node *push_node;

    if (!*src)
        return ;
    push_node = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    push_node->prev = NULL;
    if (!*dst)
    {
        *dst = push_node;
        push_node->next = NULL;
    }
    else
    {
        push_node-> = *dst;
        push_node->next->prev = push_node;
        *dst = push_node;
    }
}

void pa(stack_node **a, stack_node **b, bool print)
{
    push(a, b);
    if (!print)
        ft_printf("pa\n");
}

void pb(stack_node **b, stack_node **a, bool print)
{
    push(b, a);
    if (!print)
        ft_prinf("pb\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:36:22 by askokov-          #+#    #+#             */
/*   Updated: 2024/10/29 15:36:17 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static void swap(stack_node **head)
{
    if (!*head || !(*head)->next)
        return :
    *head = (*head)->next;
    (*head)->prev->prev = *head;
    (*head)->prev->next = (*head)->next;
    if ((*head)->next)
        (*head)->next->prev = (*head)->prev;
    (*head)->next = (*head)->prev;
    (*head)->prev = NULL;
}

void sa(stack_node **a, bool print)
{
    swap(a);
    if (!print)
        ft_printf("sa\n");
}

void sb(stack_node **b, bool print)
{
    swap(b);
    if (!print)
        ft_printf("sb\n");
}

void s(stack_node **a, stack_node **b, bool print)
{
    swap(a);
    swap(b);
    if (!print)
        ft_printf("ss\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeleton093 <skeleton093@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:24:20 by askokov-          #+#    #+#             */
/*   Updated: 2024/10/30 13:27:29 by skeleton093      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static void rotate_both(stack_node **a, stack_node **b, stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        rr(a, b, false);
    current_index(*a);
    current_index(*b);
}

static void rev_rotate_both(stack_node **a, stack_node **b, stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        rrr(a, b, false);
    current_index(*a);
    current_index(*b);
}

static void move_a_to_b(stack_node **a, stack_node **b)
{
    stack_node *cheapest_node;

    cheapest_node = get_cheapest(*a);
    if (cheapest_node->above_median && cheapest_node->target_node->above_median)
        rotate_both(a, b, cheapest_node);
    else if (!(cheapest_node->above_median) && !(cheapest_node->target_node->above_median))
        rev_rotate_both(a, b, cheapest_node);
    prep_for_push(a, cheapest_node, 'a');
    prep_for_push(b, cheapest_node->target_node, 'b');
    pb(b, a, false);
}

static void move_b_to_a(stack_node **a, stack_node **b)
{
    prep_for_push(a, (*b)->target_node, 'a');
    pa(a, b, false);
}

static void min_on_top(stack_node **a)
{
    while ((*a)->nbr != find_min(*a)->nbr)
    {
        if (find_min(*a)->above_median)
            ra(a, false);
        else 
            rra(a, false);
    }
}

void sort_stacks(stack_node **a, stack_node **b)
{
    int len_a;

    len_a = stack_len(*a);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    while (len_a-- > 3 && !stack_sorted(*a))
    {
        init_nodes_a(*a, *b);
        move_a_to_b(a, b);
    }
    sort_three(a);
    while (*b)
    {
        init_nodes_b(*a, *b);
        move_b_to_a(a, b);
    }
    current_index(*a);
    min_on_top(a);
}

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "./libft/libft.h"
# include "./printf/printf.h"

typedef struct s_stack_node
{
    int nbr;
    int index;
    int push_cost;
    bool above_median;
    bool cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
} stack_node;

int main(int argc, char **argv);

void    init_stack_a(stack_node **a, char **argv);

#endif
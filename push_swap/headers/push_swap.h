
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../srcs/libft/libft.h"
# include "../srcs/libft/printf/ft_printf.h"

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

// Error handling
int error_syntax(char *str_n);
int error_duplicate(stack_node *a, int n);
void free_stack(stack_node **stack);
void free_errors(stack_node **a);

// Stack initiation
void init_stack_a(stack_node **a, char **argv);

// Node initiation
void init_nodes_a(stack_node *a, stack_node *b);
void init_nodes_b(stack_node *a, stack_node *b);
void current_index(stack_node *stack);
void set_cheapest(stack_node *stack);
stack_node *get_cheapest(stack_node *stack);
void prep_for_push(stack_node **s, stack_node *n, char c);

// Stack utils
int stack_len(stack_node *stack);
stack_node *find_last(stack_node *stack);
bool stack_sorted(stack_node *stack);
stack_node *find_min(stack_node *stack);
stack_node *find_max(stack_node *stack);

// Commands
void sa(stack_node **a, bool print);
void sb(stack_node **b, bool print);
void ss(stack_node **a, bool print);
void ra(stack_node **a, bool print);
void rb(stack_node **b, bool print);
void rr(stack_node **a, stack_node **b, bool print);
void rra(stack_node **a, bool print);
void rrb(stack_node **b, bool print);
void rrr(stack_node **a, stack_node **b, bool print);
void pa(stack_node **a, stack_node **b, bool print);
void pb(stack_node **b, stack_node **a, bool print);

// Algorithm
void sort_three(stack_node **a);
void sort_stacks(stack_node **a, stack_node **b);

#endif
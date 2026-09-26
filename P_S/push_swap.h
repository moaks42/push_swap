/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaks <moaks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:54:44 by moaks             #+#    #+#             */
/*   Updated: 2026/09/26 19:27:17 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/libft.h"

/*circular doubly linked list, stack*/
typedef struct t_node
{
	int				value;
	struct t_node	*next;
	struct t_node	*previous;
}	t_node;

typedef struct t_stack
{
	int		size;
	t_node	*top;
}	t_stack;

// new node and new stack
t_node	*new_node(int value);
t_stack	new_stack(int size, t_node *top);

//operations
void	sa(t_stack *a, int print);
void	sb(t_stack *b, int print);
void	pa(t_stack *b, t_stack *a, int print);
void	pb(t_stack *a, t_stack *b, int print);
void	ra(t_stack *a, int print);
void	rb(t_stack *b, int print);
void	rr(t_stack *a, t_stack *n, int print);
void	rra(t_stack *a, int print);
void	rrb(t_stack *b, int print);
void	rrr(t_stack *a, t_stack *b, int print);

//disorder metric
double	compute_disorder(const t_stack *a);

#endif

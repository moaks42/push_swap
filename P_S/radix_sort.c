/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiklovi <mmiklovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:16:15 by moaks             #+#    #+#             */
/*   Updated: 2026/09/26 12:49:32 by mmiklovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  max_bits(int size)
{
  int  bits;
  int  max_rank;

  max_rank = size - 1;
  bits = 0;
  while ((max_rank >> bits) != 0)
    bits++;
  return (bits);
}

static void  pass(t_stack *a, t_stack *b, int bit)
{
  int  size;
  int  i;

  size = a->size;
  i = 0;
  while (i < size)
  {
    if (((a->top->rank >> bit) & 1) == 0)
      pb(a, b, 1);
    else
      ra(a, 1);
    i++;
  }
  while (b->size > 0)
      pa(a, b, 1);
}

void  radix_sort(t_stack *a, t_stack *b)
{
  int  bits;
  int  bit;

  assign_ranks(a);
  bits = max_bits(a->size);
  bit = 0;
  while (bit < bits)
  {
    pass(a, b, b);
    bit++;
  }
}

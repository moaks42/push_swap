

#include "push_swap.h"

static int  count_smaller(t_stack *a, t_node *node)
{
  t_node  *current;
  int      count;
  int      i;

  count = 0;
  current = a->top;
  i = 0;
  while (i < a->size)
  {
    if (current->value < node->value)
        count++;
    current = current->next;
    i++;
  }
  return (count);
}

void  assign_rank(t_stack *a)
{
  t_node  *current;
  int      i;

  current = a->top;
  i = 0;
  while (i < a->size)
  {
    current->rank = count_smaller(a, current);
    current = current->next;
    i++;
  }
}

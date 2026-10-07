/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaks <moaks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:14:48 by moaks             #+#    #+#             */
/*   Updated: 2026/09/26 19:27:02 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void  dispatcher(t_stack *a, t_stack *b, int mode, double disorder)
{
    if (mode == NO_FLAG)
        // use disorder aka adaptive
    {
        if (disorder < 0.2)
            selection_sort(a,b); 
        else if (disorder > 0.2 && disorder < 0.5)
            //medium sort
        else if (disorder > 0.5)
            radix_sort(a,b);
    }
    else if (mode == BENCH)
        //bude doplneno
    else if (mode == SIMPLE)
        selection_sort(a,b);
    else if (mode == MEDIUM)
        //medium
    else if (mode == COMPLEX)
        radix_sort(a,b);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
    int mode;
    double disorder;

	if (argc < 2)
		return (0);
    mode = get_mode(argv[1]);
	a = new_stack(0, NULL);
	b = new_stack(0, NULL);
	if (!fill_stack_a(&a, argv, argc, mode))
	{
		write(2, "Error\n", 6);
		return (1);
	}
  disorder = compute_disorder(a);
  dispatcher(t_stack *a, t_stack *b, int mode, double disorder);
	stack_free(&a);
	stack_free(&b);
	return (0);
}

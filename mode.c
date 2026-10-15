/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mode.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaks <moaks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:14:48 by moaks             #+#    #+#             */
/*   Updated: 2026/10/15 17:52:35 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_mode(char *argv1)
{
	if (ft_strncmp(argv1, "--simple", 9) == 0)
		return (SIMPLE);
	if (ft_strncmp(argv1, "--medium", 9) == 0)
		return (MEDIUM);
	if (ft_strncmp(argv1, "--complex", 10) == 0)
		return (COMPLEX);
	if (ft_strncmp(argv1, "--adaptive", 11) == 0)
		return (ADAPTIVE);
	return (NO_FLAG);
}

int	get_bench(char *argv1)
{
	if (ft_strncmp(argv1, "--bench", 8) == 0)
		return (TRUE);
	return (FALSE);
}

void	count_op(t_stack *s, t_op op)
{
	if (s->bench)
		s->bench->count[op]++;
}
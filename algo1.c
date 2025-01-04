/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:44:46 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/04 18:17:00 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	function_if_elsee(int min_pos, t_stack *stack_b)
{
	if (min_pos < (stack_b->size) / 2)
	{
		while (min_pos != 0)
		{
			rb(stack_b, 1);
			min_pos--;
		}
	}
	else
	{
		while (min_pos != stack_b->size)
		{
			rrb(stack_b, 1);
			min_pos++;
		}
	}
}

static void	handle_initial_push(t_stack *stack_a, t_stack *stack_b,
		t_sort_vars *vars)
{
	if (stack_a->arr[0] <= vars->arr[vars->start])
	{
		pb(stack_a, stack_b);
		rb(stack_b, 1);
		if (vars->end < vars->len - 1)
			vars->end++;
		if (vars->start < vars->end)
			vars->start++;
	}
	else if (stack_a->arr[0] <= vars->arr[vars->end])
	{
		pb(stack_a, stack_b);
		sort_two(stack_b, 1);
		if (vars->end < vars->len - 1)
			vars->end++;
		if (vars->start < vars->end)
			vars->start++;
	}
	else
		ra(stack_a, 1);
}

static void	process_stack_a(t_stack *stack_a, t_stack *stack_b, int *arr,
		int len)
{
	t_sort_vars	vars;

	vars.start = 0;
	vars.end = len / ((1.0 / 40.0) * stack_a->size + 7.0 / 2.0);
	vars.len = len;
	vars.arr = arr;
	while (stack_a->size != 0)
		handle_initial_push(stack_a, stack_b, &vars);
}

static void	process_stack_b(t_stack *stack_a, t_stack *stack_b)
{
	int	index;

	while (stack_b->size != 0)
	{
		index = find_max_index(stack_b);
		function_if_elsee(index, stack_b);
		pa(stack_a, stack_b);
	}
}

void	algo(t_stack *stack_a, t_stack *stack_b)
{
	int	*arr;
	int	len;

	len = stack_a->size;
	arr = malloc(len * sizeof(int));
	if (!arr)
		return ;
	ft_memcpy(arr, stack_a->arr, len * sizeof(int));
	bubble_sort(arr, len);
	process_stack_a(stack_a, stack_b, arr, len);
	process_stack_b(stack_a, stack_b);
	free(arr);
}

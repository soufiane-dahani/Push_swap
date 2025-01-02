/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:11:13 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/02 17:42:40 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	if (stack->arr[0] > stack->arr[1] && stack->arr[1] > stack->arr[2])
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (stack->arr[0] > stack->arr[2] && stack->arr[2] > stack->arr[1])
		ra(stack, 1);
	else if (stack->arr[0] > stack->arr[1] && stack->arr[2] > stack->arr[0])
		sa(stack, 1);
	else if (stack->arr[1] > stack->arr[2] && stack->arr[2] > stack->arr[0])
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (stack->arr[1] > stack->arr[0] && stack->arr[0] > stack->arr[2])
		rra(stack, 1);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	min_pos;
	int	min;

	min = stack_a->arr[0];
	min_pos = 0;
	i = 1;
	while (i < 4)
	{
		if (stack_a->arr[i] < min)
		{
			min = stack_a->arr[i];
			min_pos = i;
		}
		i++;
	}
	function_if_else(4, min_pos, stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	push_min_b(stack_a, stack_b, 5);
	push_min_b(stack_a, stack_b, 4);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	push_min_b(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	i;
	int	min_pos;
	int	min;

	min = stack_a->arr[0];
	min_pos = 0;
	i = 1;
	while (i < j)
	{
		if (stack_a->arr[i] < min)
		{
			min = stack_a->arr[i];
			min_pos = i;
		}
		i++;
	}
	function_if_else(j, min_pos, stack_a);
	pb(stack_a, stack_b);
}

void	function_if_else(int j, int min_pos, t_stack *stack_a)
{
	if (min_pos < 2)
	{
		while (min_pos != 0)
		{
			ra(stack_a, 1);
			min_pos--;
		}
	}
	else
	{
		while (min_pos != j)
		{
			rra(stack_a, 1);
			min_pos++;
		}
	}
}

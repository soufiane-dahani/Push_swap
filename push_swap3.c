/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:47:05 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/02 10:10:14 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack *stack, int capacity)
{
	stack->arr = (int *)malloc(sizeof(int) * capacity);
	if (stack->arr == NULL)
		return (0);
	stack->size = 0;
	stack->capacity = capacity;
	return (1);
}

int	push_stack(t_stack *stack, int value)
{
	if (stack->size < stack->capacity)
	{
		stack->arr[stack->size] = value;
		stack->size++;
		return (1);
	}
	return (0);
}

void	free_stack(t_stack *stack)
{
	if (stack->arr != NULL)
	{
		free(stack->arr);
		stack->arr = NULL;
	}
	stack->size = 0;
	stack->capacity = 0;
}

int	ft_is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->arr[i] > stack->arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

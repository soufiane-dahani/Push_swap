/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:28:34 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/01 13:23:21 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}

void	init_stack(t_stack *stack, int capacity)
{
	stack->arr = (int *)malloc(sizeof(int) * capacity);
	if (stack->arr == NULL)
		return (NULL);
	stack->size = 0;
	stack->capacity = capacity;
}

void	push_stack(t_stack *stack, int value)
{
	if (stack->size < stack->capacity)
	{
		stack->arr[stack->size] = value;
		stack->size++;
	}
}

int	main(int ac, char const **av)
{
    
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:29:31 by sodahani          #+#    #+#             */
/*   Updated: 2024/12/31 17:45:47 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int i)
{
	int	temp;
	int	i;

	if (stack->size > 1)
	{
		temp = stack->arr[0];
		i = 0;
		while (i < stack->size - 1)
		{
			stack->arr[i] = stack->arr[i + 1];
			i++;
		}
		stack->arr[stack->size - 1] = temp;
		if (i == 1)
			ft_printf("ra\n");
	}
}

void	rb(t_stack *stack, int i)
{
	int	temp;
	int	i;

	if (stack->size > 1)
	{
		temp = stack->arr[0];
		i = 0;
		while (i < stack->size - 1)
		{
			stack->arr[i] = stack->arr[i + 1];
			i++;
		}
		stack->arr[stack->size - 1] = temp;
		if (i == 1)
			ft_printf("rb\n");
	}
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a , 0);
	rb(b , 0);
	ft_printf("rr\n");
}

void	rra(t_stack *stack, int i)
{
	int	temp;
	int	i;

	if (stack->size > 1)
	{
		temp = stack->arr[stack->size - 1];
		i = stack->size - 1;
		while (i > 0)
		{
			stack->arr[i] = stack->arr[i - 1];
			i--;
		}
		stack->arr[0] = temp;
		if (i == 1)
			ft_printf("rra\n");
	}
}

void	rrb(t_stack *stack, int i)
{
	int	temp;
	int	i;

	if (stack->size > 1)
	{
		temp = stack->arr[stack->size - 1];
		i = stack->size - 1;
		while (i > 0)
		{
			stack->arr[i] = stack->arr[i - 1];
			i--;
		}
		stack->arr[0] = temp;
		if (i == 1)
			ft_printf("rrb\n");
	}
}

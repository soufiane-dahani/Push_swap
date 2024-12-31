/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:29:20 by sodahani          #+#    #+#             */
/*   Updated: 2024/12/31 17:39:18 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack , int i)
{
	int	temp;

	if (stack->size > 1)
	{
		temp = stack->arr[0];
		stack->arr[0] = stack->arr[1];
		stack->arr[1] = temp;
		if (i == 1)
			ft_printf("sa\n");
	}
}

void	sb(t_stack *stack , int i)
{
	int	temp;

	if (stack->size > 1)
	{
		temp = stack->arr[0];
		stack->arr[0] = stack->arr[1];
		stack->arr[1] = temp;
		if (i == 1)
			ft_printf("sb\n");
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	ft_printf("ss\n");
}

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	if (b->size > 0)
	{
		i = a->size;
		while (i > 0)
		{
			a->arr[i] = a->arr[i - 1];
			i--;
		}
		a->arr[0] = b->arr[0];
		i = 0;
		while (i < b->size - 1)
		{
			b->arr[i] = b->arr[i + 1];
			i++;
		}
		a->size++;
		b->size--;
		ft_printf("pa\n");
	}
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	if (a->size > 0)
	{
		i = b->size;
		while (i > 0)
		{
			b->arr[i] = b->arr[i - 1];
			i--;
		}
		b->arr[0] = a->arr[0];
		i = 0;
		while (i < a->size - 1)
		{
			a->arr[i] = a->arr[i + 1];
			i++;
		}
		b->size++;
		a->size--;
		ft_printf("pb\n");
	}
}

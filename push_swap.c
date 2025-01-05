/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:28:34 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/05 12:37:05 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}

void	sort_two(t_stack *stack, int i)
{
	if (stack->arr[0] > stack->arr[1] && i == 0)
		sa(stack, 1);
	if (stack->arr[0] < stack->arr[1] && i == 1)
		sb(stack, 1);
}

static void	choose_algorithm(t_stack *a, t_stack *b)
{
	if (a->capacity == 2)
		sort_two(a, 0);
	else if (a->capacity == 3)
		sort_three(a);
	else if (a->capacity == 4)
		sort_four(a, b);
	else if (a->capacity == 5)
		sort_five(a, b);
	else
		algo(a, b);
}

static void	cleanup(t_stack *a, t_stack *b, int *num)
{
	if (a)
		free_stack(a);
	if (b)
		free_stack(b);
	if (num)
		free(num);
}

int	main(int ac, char const **av)
{
	t_stack	a;
	t_stack	b;
	int		*num;
	int		capacity;

	num = check_number(ac, av, &capacity);
	if (!setup_stack(&a, num, capacity) || !check_duplicates(num, a.size))
	{
		ft_printf("error duplicates\n");
		cleanup(&a, &b, num);
		return (1);
	}
	init_stack(&b, capacity);
	if (ft_is_sorted(&a))
		return (cleanup(&a, &b, num), 0);
	choose_algorithm(&a, &b);
	return (cleanup(&a, &b, num), 0);
}

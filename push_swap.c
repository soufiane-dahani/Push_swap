/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:28:34 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/02 17:47:16 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}

void	sort_two(t_stack *stack)
{
	if (stack->size == 2 && stack->arr[0] > stack->arr[1])
		sa(stack, 1);
}

int	setup_stack(t_stack *stack, int *numbers, int count)
{
	int	i;

	if (!init_stack(stack, count))
		return (0);
	i = 0;
	while (i < count)
	{
		if (!push_stack(stack, numbers[i]))
		{
			free_stack(stack);
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(int ac, char const **av)
// {
// 	t_stack	a;
// 	t_stack	b;
// 	int		*num;

// 	num = check_number(ac, av);
// 	if (!setup_stack(&a, num, ac - 1))
// 		return (1);
// 	init_stack(&b, ac - 1);
// 	if (ft_is_sorted(&a))
// 		return (0);
// 	sort_four(&a, &b); // Sort the stack of 4 numbers
// 	// Print sorted stack
// 	for (int i = 0; i < a.size; i++)
// 		printf("%d ", a.arr[i]);
// 	printf("\n");
// 	free_stack(&a);
// 	free(num);
// 	return (0);
// }

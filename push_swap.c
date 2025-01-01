/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:28:34 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/01 16:02:24 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}


int setup_stack(t_stack *stack, int *numbers, int count)
{
    if (!init_stack(stack, count))
        return 0;

    int i = 0;
    while (i < count)
    {
        if (!push_stack(stack, numbers[i]))
        {
            free_stack(stack);
            return 0;
        }
        i++;
    }
    return 1;
}



int main(int ac, char const **av)
{
	t_stack a;
	int *num;

	
	num = check_number(ac, av);
	setup_stack(&a, num, ac - 1);
	 for (int i = 0; i < a.size; i++)
        printf("%d ", a.arr[i]);
    printf("\n");
    return 0;
}



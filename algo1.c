/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:44:46 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/03 18:38:19 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void function_if_elsee(int min_pos, t_stack *stack_b)
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

void algo(t_stack *stack_a, t_stack *stack_b)
{
    int arr[stack_a->size];
    // int i = 0;
    int start = 0;
    int len = stack_a->size;
    int end = stack_a->size / 6;

    memcpy(arr, stack_a->arr, stack_a->size * sizeof(int));
    bubble_sort(arr, stack_a->size);

    while (stack_a->size != 0)
    {
        if (stack_a->arr[0] <= arr[start])
        {
            pb(stack_a, stack_b);
            rb(stack_b, 1);
            if (end < len - 1)
                end++;
            if (start < end)
                start++;
        }
        else if (stack_a->arr[0] <= arr[end])
        {
            pb(stack_a, stack_b);
            sort_two(stack_b, 1);
            if (end < len - 1)
                end++;
            if (start < end)
                start++;
        }
        else
        {
            ra(stack_a, 1);
        }
    }

    while (stack_b->size != 0)
    {
        int index = find_max_index(stack_b);
        function_if_elsee(index, stack_b);
        pa(stack_a, stack_b);
    }
}

void bubble_sort(int arr[], int n)
{
    int swapped = 1;
    while (swapped)
    {
        swapped = 0;
        int i = 0;
        while (i < n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
        n--;
    }
}

int find_max_index(t_stack *stack)
{
    int max = stack->arr[0];
    int index = 0;
    for (int i = 1; i < stack->size; i++)
    {
        if (stack->arr[i] > max)
        {
            max = stack->arr[i];
            index = i;
        }
    }
    return index;
}


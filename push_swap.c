/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:28:34 by sodahani          #+#    #+#             */
/*   Updated: 2024/12/31 19:10:52 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a , 0);
	rrb(b, 0);
    ft_printf("rrr\n");
}
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
// void init_stack(t_stack *stack, int capacity)
// {
//     stack->arr = (int *)malloc(sizeof(int) * capacity);
//     if (stack->arr == NULL)
//     {
//         ft_printf("Error: Memory allocation failed.\n");
//         return (NULL);
//     }
//     stack->size = 0;
//     stack->capacity = capacity;
// }
int is_number(char *str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] != '\0')
    {
        if (!ft_isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}
void push_stack(t_stack *stack, int value)
{
    if (stack->size < stack->capacity)
    {
        stack->arr[stack->size] = value;
        stack->size++;
    }
}

char *join_av(int ac, char const **av)
{
    char *res = NULL;
    int i = 1;

    while (i < ac)
    {
        res = ft_strjoin(res, av[i]);
        i++;
    }
    return res;
}

int main(int ac, char const **av)
{
    char *res = join_av(ac , av);
    int i = 0;
    while (res[i])
    {
        printf("%d", res[i]);
        i++;
    }
    return 0;
}

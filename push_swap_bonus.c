/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:53:03 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/06 10:59:34 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

void	cleanup(t_stack *a, t_stack *b, int *num)
{
	if (a)
		free_stack(a);
	if (b)
		free_stack(b);
	if (num)
		free(num);
}

void	execute_single_command(char *line, t_stack *a, t_stack *b)
{
	if (ft_strncmp("sa\n", line, 3) == 0)
		sa(a);
	else if (ft_strncmp("sb\n", line, 3) == 0)
		sb(b);
	else if (ft_strncmp("ss\n", line, 3) == 0)
		ss(a, b);
	else if (ft_strncmp("pa\n", line, 3) == 0)
		pa(a, b);
	else if (ft_strncmp("pb\n", line, 3) == 0)
		pb(a, b);
	else
		execute_rotate_command(line, a, b);
}

void	execute_rotate_command(char *line, t_stack *a, t_stack *b)
{
	if (ft_strncmp("ra\n", line, 3) == 0)
		ra(a);
	else if (ft_strncmp("rb\n", line, 3) == 0)
		rb(b);
	else if (ft_strncmp("rr\n", line, 3) == 0)
		rr(a, b);
	else if (ft_strncmp("rra\n", line, 4) == 0)
		rra(a);
	else if (ft_strncmp("rrb\n", line, 4) == 0)
		rrb(b);
	else if (ft_strncmp("rrr\n", line, 4) == 0)
		rrr(a, b);
	else
	{
		ft_printf("Error\n");
		free(line);
		exit(1);
	}
}

int	main(int ac, char const **av)
{
	t_stack	a;
	t_stack	b;
	int		*num;
	int		capacity;

	b = (t_stack){0};
	if (ac == 1)
		return (0);
	num = check_number(ac, av, &capacity);
	if (!num)
	{
		ft_printf("Error\n");
		return (free(num), 1);
	}
	if (!setup_stack(&a, num, capacity) || !check_duplicates(num, a.size))
	{
		ft_printf("Error\n");
		cleanup(&a, &b, num);
		return (1);
	}
	init_stack(&b, capacity);
	if (ft_is_sorted(&a))
		return (cleanup(&a, &b, num), 0);
	line_by_line(&a, &b);
	return (cleanup(&a, &b, num), 0);
}

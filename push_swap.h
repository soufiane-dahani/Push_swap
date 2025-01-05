/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:34:38 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/05 18:29:58 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	int	*arr;
	int	size;
	int	capacity;
}		t_stack;

typedef struct s_sort_vars
{
	int	start;
	int	end;
	int	len;
	int	*arr;
}		t_sort_vars;

void	sa(t_stack *stack, int i);
void	sb(t_stack *stack, int i);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *stack, int i);
void	rb(t_stack *stack, int i);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *stack, int i);
void	rrb(t_stack *stack, int i);
void	rrr(t_stack *a, t_stack *b);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*join_av(int ac, char const **av);
char	*ft_strdup(const char *src);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		is_number(char *str);
int		check_all_numbers(char **res);
int		*check_number(int ac, char const **av, int *capacity);
int		*convert_to_integers(char **res, int *capacity);
long	ft_atoi(const char *str);
int		setup_stack(t_stack *stack, int *numbers, int count);
void	free_stack(t_stack *stack);
int		push_stack(t_stack *stack, int value);
int		init_stack(t_stack *stack, int capacity);
int		ft_is_sorted(t_stack *stack);
void	sort_two(t_stack *stack, int i);
void	sort_three(t_stack *stack);
void	sort_four(t_stack *stack_a, t_stack *stack_b);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
void	push_min_b(t_stack *stack_a, t_stack *stack_b, int j);
void	function_if_else(int min_pos, t_stack *stack_a);
int		check_duplicates(int *arr, int size);
void	algo(t_stack *stack_a, t_stack *stack_b);
void	bubble_sort(int arr[], int n);
int		find_max_index(t_stack *stack);
void	free_string_array(char **arr);
#endif

// y9der ykon 3andi problem f capacity ;

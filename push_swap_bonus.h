/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:53:20 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/06 10:59:58 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "ft_printf.h"
# include "get_next_line.h"
# include <limits.h>

typedef struct s_stack
{
	int	*arr;
	int	size;
	int	capacity;
}		t_stack;

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
int		*check_number(int ac, char const **av, int *capacity);
char	*join_av(int ac, char const **av);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
int		is_number(char *str);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		check_all_numbers(char **res);
int		*convert_to_integers(char **res, int *capacity);
char	**ft_split(char const *s, char c);
void	free_string_array(char **arr);
long	ft_atoi(const char *str);
int		check_duplicates(int *arr, int size);
int		init_stack(t_stack *stack, int capacity);
int		push_stack(t_stack *stack, int value);
void	free_stack(t_stack *stack);
int		ft_is_sorted(t_stack *stack);
int		setup_stack(t_stack *stack, int *numbers, int count);
void	execute_command(char *line, t_stack *a, t_stack *b);
void	line_by_line(t_stack *a, t_stack *b);
void	execute_single_command(char *line, t_stack *a, t_stack *b);
void	execute_rotate_command(char *line, t_stack *a, t_stack *b);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:34:38 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/01 15:43:29 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack
{
	int	*arr;
	int	size;
	int	capacity;
}		t_stack;

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
int		*check_number(int ac, char const **av);
int		*convert_to_integers(char **res);
int		ft_atoi(const char *str);
int 	setup_stack(t_stack *stack, int *numbers, int count);
void 	free_stack(t_stack *stack);
int 	push_stack(t_stack *stack, int value);
int		init_stack(t_stack *stack, int capacity);
#endif

//  check if sorted
// algo for sorting  2 to 5 numbers
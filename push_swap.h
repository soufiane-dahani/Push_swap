/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:34:38 by sodahani          #+#    #+#             */
/*   Updated: 2024/12/31 17:58:02 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*arr;
	int	size;
	int	capacity;
}		t_stack;

void	sa(t_stack *stack , int i);
void	sb(t_stack *stack , int i);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *stack, int i);
void	rb(t_stack *stack, int i);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *stack, int i);
void	rrb(t_stack *stack, int i);
void	rrr(t_stack *a, t_stack *b);
int	    ft_isdigit(int c);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*join_av(int ac, char const **av);
#endif

// check ""
//  check if sorted
// algo for sorting  2 to 5 numbers
// protect moves | print rrr not rra rrb rrr
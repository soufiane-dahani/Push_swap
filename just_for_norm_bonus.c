/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_for_norm_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:39:56 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/09 10:09:08 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	check_min_max(char **res)
{
	int		i;
	long	tmp;

	i = 0;
	while (res[i])
	{
		tmp = ft_atoi(res[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

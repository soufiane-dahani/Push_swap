/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:49:49 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/01 15:21:22 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}

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

int	check_all_numbers(char **res)
{
	int	i;
	int	j;

	i = 0;
	while (res[i])
	{
		if (!is_number(res[i]))
		{
			ft_printf("Error: '%s' is not a number\n", res[i]);
			j = 0;
			while (res[j])
				free(res[j++]);
			free(res);
			return (0);
		}
		i++;
	}
	return (1);
}

int	*convert_to_integers(char **res)
{
	int	*num;
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (res[count])
		count++;
	num = malloc(count * sizeof(int));
	if (!num)
	{
		while (res[i])
			free(res[i++]);
		free(res);
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		num[i] = ft_atoi(res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (num);
}

int	*check_number(int ac, char const **av)
{
	char	*result;
	char	**res;
	int		*numbers;
	int		i;

	i = 0;
	result = join_av(ac, av);
	if (!result)
		return (NULL);
	res = ft_split(result, ' ');
	free(result);
	if (!res)
		return (NULL);
	if (!check_all_numbers(res))
		return (NULL);
	numbers = convert_to_integers(res);
	return (numbers);
}

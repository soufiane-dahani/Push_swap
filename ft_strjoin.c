/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:51:08 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/06 21:11:21 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

static int	validate_av(int ac, char const **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac <= 1 || !av)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] == ' ')
			j++;
		if (!av[i][j])
			return (0);
		i++;
	}
	return (1);
}

char	*join_av(int ac, char const **av)
{
	char	*result;
	char	*temp;
	int		i;

	if (!validate_av(ac, av))
		return (NULL);
	i = 2;
	result = ft_strdup(av[1]);
	if (!result)
		return (NULL);
	while (i < ac)
	{
		temp = ft_strjoin(result, " ");
		if (!temp)
		{
			free(result);
			return (NULL);
		}
		free(result);
		result = ft_strjoin(temp, av[i++]);
		free(temp);
		if (!result)
			return (NULL);
	}
	return (result);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:52:27 by sodahani          #+#    #+#             */
/*   Updated: 2025/01/06 11:05:20 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "push_swap_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		*(sub + i) = *(s + start);
		start++;
		i++;
	}
	*(sub + i) = '\0';
	return (sub);
}

void	execute_command(char *line, t_stack *a, t_stack *b)
{
	execute_single_command(line, a, b);
}

void	line_by_line(t_stack *a, t_stack *b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		execute_command(line, a, b);
		free(line);
		line = get_next_line(0);
	}
	if (!ft_is_sorted(a) || b->size != 0)
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
}

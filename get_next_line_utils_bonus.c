/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-fran <ade-fran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:40:27 by ade-fran          #+#    #+#             */
/*   Updated: 2023/12/12 18:40:30 by ade-fran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_check_new_line(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return (i + 1);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		return (i + 1);
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*m;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	m = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!m)
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			m[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (s2[j])
			m[i++] = s2[j++];
	}
	m[i] = '\0';
	return (free(s1), m);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

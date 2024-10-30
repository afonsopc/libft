/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:44:09 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/30 12:38:12 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **strs, size_t index)
{
	while (index-- > 0)
		free(strs[index]);
	free(strs);
}

int	count_items(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		i++;
	}
	return (i);
}

int	split(char const *s, char c, char **strs)
{
	size_t		i;
	const char	*start;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		start = s;
		while (*s && *s != c)
			s++;
		strs[i] = malloc(s - start + 1);
		if (!strs[i])
		{
			free_all(strs, i);
			return (0);
		}
		ft_strlcpy(strs[i], start, s - start + 1);
		while (*s && *s == c)
			s++;
		i++;
	}
	strs[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**strs;

	if (!s)
		return (NULL);
	strs = malloc((count_items(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (!split(s, c, strs))
		return (NULL);
	return (strs);
}

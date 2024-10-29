/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:33:02 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/29 21:43:17 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	matches(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (matches(*s1, set))
		s1++;
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (ft_strdup(s1));
	while (matches(s1[s1_len - 1], set))
		s1_len--;
	str = malloc(s1_len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	return (str);
}

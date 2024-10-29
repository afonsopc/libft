/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:25:19 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/29 10:42:26 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last_found;
	int	i;

	i = -1;
	last_found = 0;
	while (i == -1 || s[i])
	{
		if (s[i + 1] == c)
			last_found = i + 1;
		i++;
	}
	if (s[last_found] == c)
		return ((char *)&s[last_found]);
	return (NULL);
}

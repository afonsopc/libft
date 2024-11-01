/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:17:02 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/31 20:32:40 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)src;
	ptr2 = (char *)dst;
	i = -1;
	if (ptr2 > ptr1)
		while (len--)
			ptr2[len] = ptr1[len];
	else
		while (++i < len)
			ptr2[i] = ptr1[i];
	return (dst);
}

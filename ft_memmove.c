/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:17:02 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/30 19:36:00 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*ptr1;
	unsigned char		*ptr2;

	ptr1 = src;
	ptr2 = dst;
	if (dst == NULL && src == NULL)
		return (dst);
	if (ptr1 < ptr2)
	{
		ptr1 += len;
		ptr2 += len;
		while (len--)
			*--ptr2 = *--ptr1;
	}
	else
		while (len--)
			*ptr2++ = *ptr1++;
	return (dst);
}

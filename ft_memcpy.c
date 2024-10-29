/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:11:15 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/29 10:14:17 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*ptr1;
	unsigned char		*ptr2;

	ptr1 = src;
	ptr2 = dst;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n > 0)
	{
		ptr2[n - 1] = ptr1[n - 1];
		n--;
	}
	return (dst);
}

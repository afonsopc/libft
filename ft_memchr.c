/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:54:58 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/29 10:58:40 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	n--;
	while (n && *((unsigned char *)s) != c)
		s++;
	if (*((unsigned char *)s) == c)
		return ((void *)s);
	return (NULL);
}

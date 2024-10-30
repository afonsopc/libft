/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:04:12 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/30 14:44:15 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	memlen(void *mem)
{
	size_t			count;
	unsigned char	*ptr;

	if (!mem)
		return (sizeof(unsigned char *));
	count = 0;
	ptr = (unsigned char *)mem;
	while (ptr[count])
		count++;
	return (count * sizeof(unsigned char *));
}

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(memlen(content) + sizeof(t_list *));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

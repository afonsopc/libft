/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:22:33 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/30 18:51:56 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;
	t_list	*current;

	new = malloc(ft_lstsize(lst) * sizeof(t_list *));
	if (!new)
		return (NULL);
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		ft_lstadd_back(new, current);
		lst = lst->next;
	}
	return (new[0]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:09:10 by afpachec          #+#    #+#             */
/*   Updated: 2024/10/31 15:17:06 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !del)
		return ;
	curr = lst[0];
	while (curr)
	{
		next = curr->next;
		del(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}

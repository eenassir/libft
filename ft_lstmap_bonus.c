/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:42:47 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/11 23:01:04 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!list || !f || !del)
		return (NULL);
	new = NULL;
	while (list)
	{
		node = ft_lstnew(list->content);
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		node -> content = f(list->content);
		ft_lstadd_back(&new, node);
		list = list->next;
	}
	return (new);
}

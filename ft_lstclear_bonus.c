/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:23:55 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/11 16:00:46 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list	*temp;

	if (!list || !del)
		return ;
	while (*list)
	{
		temp = (*list)->next;
		ft_lstdelone(*list, del);
		(*list) = temp;
	}
}

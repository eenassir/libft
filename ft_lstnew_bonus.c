/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:29:04 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/06 22:25:14 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_;

	new_ = (t_list *)malloc(sizeof (t_list));
	if (!new_)
		return (NULL);
	new_->content = content;
	new_->next = NULL;
	return (new_);
}

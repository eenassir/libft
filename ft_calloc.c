/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:24:50 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/20 09:42:33 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	max;

	if (count > 0 && SIZE_MAX / count < size)
		return (NULL);
	max = count * size;
	p = (char *)malloc(max);
	if (!p)
		return (NULL);
	while (max)
	{
		ft_bzero(p, max);
		max --;
	}
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:19:27 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/21 12:39:23 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (src < dst)
	{
		while (length--)
			d[length] = s[length];
	}
	else if (src > dst)
	{
		while (i < length)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

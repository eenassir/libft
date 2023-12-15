/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:18:12 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/11 16:03:37 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	ls;
	size_t	ld;

	if (!dst && !dstsize && src)
		return (0);
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
		return (ls);
	if (ld > dstsize - 1)
		return (ls + dstsize);
	while (src[j] && (ld + j) < dstsize - 1)
	{
		dst[ld + j] = src[j];
		j++;
	}
	dst[ld + j] = '\0';
	return (ls + ld);
}

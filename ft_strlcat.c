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
	size_t	len_s;
	size_t	len_d;

	if (!dst && !dstsize && src)
		return (0);
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
		return (len_s);
	if (len_d > dstsize - 1)
		return (len_s + dstsize);
	while (src[j] && (len_d + j) < dstsize - 1)
	{
		dst[len_d + j] = src[j];
		j++;
	}
	dst[len_d + j] = '\0';
	return (len_s + len_d);
}

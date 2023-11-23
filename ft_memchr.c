/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:47:00 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/22 21:00:06 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *arr;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)c)
			return ((void *)arr + i);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:32:59 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/28 11:04:24 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t  i;
	unsigned char *p;
	unsigned char *s;

	if (n == 0)
		return (0);
	if (!s1 && !s2)
		return (0);
	i = 0;
	p = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while ((p[i] == s[i]) && i < n - 1)
	{
		i++;
	}
	return (p[i] - s[i]);
}

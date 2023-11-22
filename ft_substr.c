/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:48:14 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/19 12:24:30 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	int l;
	char *p;

	i = 0;
	l = ft_strlen(s);
	if (l == 0)
	{
		len = 0;
		start = 0;
	}
	if (len > l && len > 0)
		len = l - start;
	if (start > l && len > 0)
	{
		len = l;
		start = 0;
	}
	p = (char *)malloc((len + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (s[start] && start <= len)
	{
		p[i++] = s[start++];
	}
	p[i] = NULL;
	return (p);
}

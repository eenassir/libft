/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:11:15 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/11 15:58:33 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	j;

	count = 0;
	if (!haystack && !len && needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[count] && count < len)
	{
		j = 0;
		while (needle[j] && haystack[count + j] == needle[j]
			&& (count + j) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[count]);
		if (((count + j) == len))
			return (NULL);
		count++;
	}
	return (NULL);
}

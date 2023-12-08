/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:12:34 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/06 22:27:12 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 2;
	start = 0;
	end = ft_strlen(s1);
	if (!*s1)
		i = 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	p = (char *)malloc(end - start + i);
	if (!p)
		return (NULL);
	i = 0;
	while (s1[start] && start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}

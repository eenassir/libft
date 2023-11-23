/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:43:38 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/23 22:56:53 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p;
	int i;
	int j;
	int l1;
	int l2;

	i = 0;
	j = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = (char *)malloc((l1 + l2 + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = (char)s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = (char)s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

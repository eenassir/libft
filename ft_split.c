/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:19:47 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/28 10:25:20 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_word(char const *s, char c)
{
	int i;
	int cpt;
 
	i = 0;
	cpt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cpt++;
		i++;
	}
	return (cpt);
}

int wolens(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char **ft_free(char **p, int j)
{
	while (j--)
	{
		free(p[j]);
	}
	free(p);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	int cpt;
	char **p;
	int j;
	int i;
	int len;

	j = 0;
	cpt = ft_count_word(s, c);
	p = (char **)malloc((cpt + 1) * sizeof (char *));
	if (!p)
		return (NULL);
	i = 0;
	while (j < cpt)
	{
		while (s[i] == c)
			i++;
		len = wolens(s + i , c);
		p[j] = ft_substr(s, i, len);
		if (!p[j])
			return (ft_free(p, j - 1));
		i += len;
		j++;
	}
	p[j] = NULL;
	return (p);
}
/*
int main()
{
	printf ("%d", wolens("helloworld ghello salam", ' '));
}*/

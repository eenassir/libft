/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:15:58 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/27 11:25:55 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbrlen(int n)
{
	long	num;
	int		i;

	i = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = num * -1;
		i++;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static	void	set_negative_num(long *nn, int *i, char *p)
{
	*nn *= -1;
	*i = 0;
	p[*i] = '-';
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	int		num;
	int		len;
	long	nn;

	i = -1;
	len = ft_nbrlen(n);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	nn = n;
	if (n < 0)
		set_negative_num(&nn, &i, p);
	p[len] = '\0';
	while (--len > i)
	{
		num = nn % 10;
		p[len] = num + 48;
		nn = nn / 10;
	}
	return (p);
}

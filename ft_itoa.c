/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:15:58 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/26 22:09:03 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_nbrlen(int n)
{
	int i;
	long num;

	if (n == 0)
		return (1);
	num = n;
	i = 0;
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num = num/10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *p;
	int i;
	int len;
	int number;
	bool flag;

	len = ft_nbrlen(n);
	i = 0;
	flag = false;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n < 0)
	{
		flag = true;
		p[0] = '-';
	}
	while (--len > -1)
	{
		if (len == 0 && flag == true)
			break ;
		number = n % 10;
		if (number < 0)
			number *= -1;
		p[len] = number + 48;
		n = n / 10;
	}
	return (p);
}

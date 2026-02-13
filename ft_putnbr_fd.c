/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:06:58 by eenassir          #+#    #+#             */
/*   Updated: 2023/12/06 22:23:49 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (fd < 0)
		return ;
	if (num == -2147483648)
		write (fd, "-2147483648", 11);
	else if (num < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(-num, fd);
	}
	else if (num >= 0 && num <= 9)
	{
		num = num + 48;
		write (fd, &num, 1);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}

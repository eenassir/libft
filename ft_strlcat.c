/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenassir <eenassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:18:12 by eenassir          #+#    #+#             */
/*   Updated: 2023/11/22 10:08:03 by eenassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
   size_t i;
   size_t j;
   size_t ls;
   size_t ld;

   ls = ft_strlen(src);
   ld = ft_strlen(dst);
   i = 0;
   j = 0;
   if (ld > dstsize)
	   return (ls + dstsize);
   while ((ld + j) <= dstsize - 1)
   {
	   dst[ld + j] = src[j];
	   j++;
   }
   dst[ld + j] = '\0';
   return (ls + ld);
}

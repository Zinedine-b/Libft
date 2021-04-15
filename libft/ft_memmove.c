/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboutabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:09:18 by zboutabb          #+#    #+#             */
/*   Updated: 2021/04/12 16:55:20 by zboutabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (a > b)
		while (i < len--)
			a[len] = b[len];
	else
		while (i < len)
		{
			*(char *)(a + i) = *(char *)(b + i);
			i++;
		}
	return (dst);
}

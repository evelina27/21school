/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:24:56 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/12 16:08:30 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destptr, const void *srcptr, size_t n)
{
	size_t			i;
	unsigned char	bus;
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	if (!src && !dest)
		return (destptr);
	if (src > dest && (size_t)(src - dest) < n)
	{
		i = 0;
		bus = src[i];
		while (n && i < n - 1)
		{
			*(dest + i) = bus;
			bus = src[++i];
		}
		*(dest + i) = bus;
		return (destptr);
	}
	i = n;
	while (n && dest + (--i) >= (unsigned char *)destptr)
		*(dest + i) = src[i];
	return (destptr);
}

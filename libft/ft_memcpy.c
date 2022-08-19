/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:54:02 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/12 15:08:47 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*res;

	res = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < count)
	{
		*res = *(unsigned char *)(src + i);
		i++;
		res++;
	}
	return (dest);
}

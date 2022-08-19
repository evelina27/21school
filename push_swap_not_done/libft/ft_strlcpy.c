/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:15:42 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/13 14:52:45 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen((char *)src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}

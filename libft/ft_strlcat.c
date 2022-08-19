/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:47:53 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/13 14:47:55 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	if (!dstsize || len_dst >= dstsize)
		return (dstsize + ft_strlen((char *)src));
	while (src[i] && i < dstsize - len_dst - 1)
	{
		dst[len_dst + i] = (char)src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + ft_strlen((char *)src));
}

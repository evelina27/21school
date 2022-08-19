/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:29:51 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:29:53 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *)memptr;
	i = 0;
	while (i < num)
	{
		if ((unsigned char)ch[i] == (unsigned char)val)
			return ((unsigned char *)(ch + i));
		i++;
	}
	return ((void *)0);
}

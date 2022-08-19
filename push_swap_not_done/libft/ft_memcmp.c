/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:30:03 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:30:20 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (num == 0)
		return (0);
	i = 0;
	p1 = (unsigned char *)memptr1;
	p2 = (unsigned char *)memptr2;
	while (i < num && p1[i] == p2[i])
		i++;
	if (i == num)
		i--;
	return (p1[i] - p2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:30:29 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:30:31 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*ret;
	size_t			i;

	i = number * size;
	if (number && i / number != size)
		return (NULL);
	ret = malloc(sizeof(unsigned char) * number * size);
	i = 0;
	if (!ret)
		return (ret);
	while (i < number * size)
	{
		ret[i] = '\0';
		i++;
	}
	return (ret);
}

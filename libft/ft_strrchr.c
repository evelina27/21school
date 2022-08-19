/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:28:44 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:28:48 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char	*cur;
	size_t	i;
	size_t	last;

	cur = (char *)string;
	i = 0;
	last = 0;
	while (cur[i])
	{
		if ((unsigned char)cur[i] == (unsigned char)symbol)
			last = i;
		i++;
	}
	if (symbol == 0)
		last = i;
	if (last == 0 && (unsigned char)cur[last] != (unsigned char)symbol)
		return (NULL);
	return (&cur[last]);
}

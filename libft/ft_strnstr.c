/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:31:07 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/13 12:24:59 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*hay;
	int			ndl;
	size_t		i;

	hay = (char *)haystack;
	if (!(*needle))
		return (hay);
	i = -1;
	while (hay[++i] && i < len)
	{
		if (hay[i] == *needle)
		{
			ndl = 0;
			while (hay[ndl + i] && needle[ndl] && needle[ndl] == hay[ndl + i] \
			&& i + ndl < len)
				ndl++;
			if (!needle[ndl] && needle[ndl - 1] == hay[ndl - 1 + i])
				return (&hay[i]);
		}
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:28:05 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:28:12 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	if (!s)
		return ((void *)0);
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	ret = malloc(sizeof(char) *(len + 1));
	if (!ret)
		return ((void *)0);
	i = 0;
	while (s && start < ft_strlen((char *)s) && i < len && s[i + start])
	{
		ret[i] = (char)s[i + start];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

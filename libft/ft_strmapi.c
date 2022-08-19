/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:12:03 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 21:12:05 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;
	size_t			len;

	if (!s || !f)
		return ((void *)0);
	len = ft_strlen((char *)s);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return ((void *)0);
	i = 0;
	while (i < len)
	{
		ret[i] = (*f)(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

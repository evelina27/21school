/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:28:59 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:29:03 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ret;
	unsigned int	len1;
	unsigned int	i;

	if (!s1 || !s2)
		return ((void *)0);
	ret = malloc(sizeof(char) * \
	(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!ret)
		return ((void *)0);
	i = 0;
	while (s1[i])
	{
		ret[i] = (char)s1[i];
		i++;
	}
	len1 = i;
	i = 0;
	while (s2[i])
	{
		ret[len1 + i] = (char)s2[i];
		i++;
	}
	ret[len1 + i] = '\0';
	return (ret);
}

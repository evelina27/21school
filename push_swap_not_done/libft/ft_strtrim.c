/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:28:24 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:28:30 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ch_in_set(char ch, char *set)
{
	while (*set)
	{
		if (ch == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	find_start(char *s, char *set)
{
	size_t	ret;

	ret = 0;
	while (s[ret] && ch_in_set(s[ret], set))
		ret++;
	return (ret);
}

static size_t	find_end(char *s, char *set)
{
	size_t	ret;

	ret = 0;
	while (s[ret] != '\0')
		ret++;
	ret -= 1;
	while (ret > 0 && ch_in_set(s[ret], set))
		ret--;
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ret;
	size_t	len;

	if (!s1 || !set)
		return ((void *)0);
	i = find_start((char *)s1, (char *)set);
	len = find_end((char *)s1, (char *)set) + 1;
	if (len < i)
	{
		ret = (char *)malloc(sizeof(char) * (len + 1));
		ret[0] = '\0';
		return (ret);
	}
	ret = malloc(sizeof(char) * (len - i + 1));
	if (!ret)
		return ((void *)0);
	ft_memcpy(ret, (const char *)(&s1[i]), len - i);
	ret[len - i] = '\0';
	return (ret);
}

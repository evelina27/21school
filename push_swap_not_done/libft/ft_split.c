/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:30:21 by jeddard           #+#    #+#             */
/*   Updated: 2021/11/13 18:30:24 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_elems(char *s, char c)
{
	size_t	ret;
	size_t	i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (ret);
		else
			ret++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (ret);
}

static size_t	elem_len(char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (s[ret] && s[ret] != c)
		ret++;
	return (ret);
}

static void	*free_1(char **arg)
{
	size_t	i;

	i = 0;
	while (arg[i])
		free(arg[i++]);
	free(arg);
	return ((void *)0);
}

static char	**make_arr(char *s, char c, char **ret)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			ret[j] = ft_substr((const char *)s, i, elem_len(&s[i], c));
			i += elem_len(&s[i], c);
			if (!ret[j])
				return (free_1(ret));
			j++;
		}
	}
	ret[j] = (void *)0;
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	len;

	if (!s)
		return ((void *)0);
	if (!(*s))
	{
		ret = malloc(sizeof(char *) * 2);
		ret[0] = (void *)0;
		return (ret);
	}
	len = count_elems((char *)s, c);
	ret = malloc(sizeof(char *) * (len + 1));
	if (!ret)
		return (ret);
	ret = make_arr((char *)s, c, ret);
	return (ret);
}

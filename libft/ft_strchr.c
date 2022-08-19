/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:29:33 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 16:29:38 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	char	*ch;
	size_t	i;

	ch = (char *)string;
	i = 0;
	while (ch[i])
	{
		if ((unsigned char)(ch[i]) == (unsigned char)symbol)
			return (&ch[i]);
		i++;
	}
	if (symbol == '\0')
		return (&ch[i]);
	return ((void *)0);
}

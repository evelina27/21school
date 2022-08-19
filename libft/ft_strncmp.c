/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 11:30:54 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/05 15:25:32 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	if (!(*s1) || !(*s2))
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
	while ((unsigned char)(*(s1)) && (unsigned char)(*(s2)) && n > 0)
	{
		if ((unsigned char)(*s1) != (unsigned char)(*s2))
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		s1--;
		s2--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

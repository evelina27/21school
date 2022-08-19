/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:10:40 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/25 21:10:42 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	ret;

	if (num == 0)
		return (1);
	ret = 0;
	while (num / 10 != 0)
	{
		ret += 1;
		num /= 10;
	}
	ret++;
	if (num < 0)
		ret++;
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;

	len = ft_numlen(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (s);
	sign = 1;
	if (n < 0)
		sign = -1;
	s[len--] = '\0';
	while (s && n / 10 != 0)
	{
		s[len] = (n % 10) * sign + 48;
		len--;
		n /= 10;
	}
	s[len--] = n * sign + '0';
	if (sign == -1)
		s[len] = '-';
	return (s);
}

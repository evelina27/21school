/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:38:17 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/12 13:38:31 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(char *s)
{
	int		len;

	len = 0;
	while (s[len] && s[len] >= '0' && s[len] <= '9')
		len++;
	return (len);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;
	int	len;

	i = 0;
	sign = 1;
	while ((str[i] < 14 && str[i] > 8) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	len = ft_numlen((char *)(str + i));
	if (str[i] < '0' || str[i] > '9')
		return (0);
	if (len > 19 || (len == 19 && ft_strncmp((char *)(str + i), \
	"9223372036854775807", len) > 0))
		return (sign * 9223372036854775807 + (sign - 1) / 2);
	res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - 48;
	res *= sign;
	return (res);
}

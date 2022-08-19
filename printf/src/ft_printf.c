/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:01:39 by jeddard           #+#    #+#             */
/*   Updated: 2022/01/11 17:05:08 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	t_print	*t;
	int		i;
	int		ret;

	t = (t_print *)malloc(sizeof(t_print));
	if (!t)
		return (-1);
	*t = ft_init_t(t);
	va_start(t->args, s);
	i = -1;
	ret = 0;
	while (s[++i])
	{
		if (s[i] == '%')
			i = ft_print_format(s, i + 1, t);
		else
			i += ft_putchar(s[i], t);
	}
	va_end(t->args);
	ret += t->size;
	free(t);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:50:06 by jeddard           #+#    #+#             */
/*   Updated: 2021/10/27 11:50:09 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, t_print *t)
{
	int	div;
	int	len;

	len = 0;
	div = 1000000000;
	if (n == 0)
		len += ft_putchar('0', t);
	else
	{
		if (n < 0)
			len += ft_putchar('-', t);
		while (n / div == 0)
			div /= 10;
		while (div != 1)
		{
			len += ft_putchar((n / div) * (1 - 2 * (n < 0)) + 48, t);
			n = n % div;
			div /= 10;
		}
		len += ft_putchar(n * (1 - 2 * (n < 0)) + 48, t);
	}
	return (len);
}

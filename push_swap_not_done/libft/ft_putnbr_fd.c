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

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	int		sign;

	sign = 1;
	div = 1000000000;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			sign = -1;
		}
		while (n / div == 0)
			div /= 10;
		while (div != 1)
		{
			ft_putchar_fd((n / div) * sign + 48, fd);
			n = n % div;
			div /= 10;
		}
		ft_putchar_fd(n * sign + 48, fd);
	}
}

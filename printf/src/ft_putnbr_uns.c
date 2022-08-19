#include "ft_printf.h"

int	ft_purnbr_uns(unsigned int n, t_print *t)
{
	int	div;
	int	i;

	i = 0;
	div = 1000000000;
	if (n == 0)
		i += ft_putchar('0', t);
	else
	{
		while (n / div == 0)
			div /= 10;
		while (div != 1)
		{
			i += ft_putchar((n / div) + 48, t);
			n = n % div;
			div /= 10;
		}
		i += ft_putchar(n + 48, t);
	}
	return (i);
}
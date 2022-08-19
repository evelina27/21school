#include "ft_printf.h"

int	ft_print_format(char *f, int ind, t_print *t)
{
	if (f[ind] == 'c')
		ind += ft_putchar(va_arg(t->args, char), t);
	if (f[ind] == 's')
		ind += ft_putstr(va_arg(t->args, char*), t);
	if (f[ind] == 'i' || f[ind] == 'd')
		ind += ft_putnbr(va_arg(t->args, int), t);
	if (f[ind] == 'u')
		ind += ft_putnbr_uns(va_arg(t->args, unsigned int), t);
	if (f[ind] == '%')
		ind += ft_putchar(f[ind], t);
}
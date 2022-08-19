#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int	ft_putchar(char c, t_print	*t);
int	ft_putnbr(int n, t_print *t);
int	ft_putstr(char *s, t_print	*t);
int	ft_print_format(char *f, int ind, t_print *t);
int	ft_purnbr_uns(unsigned int n, t_print *t);

typedef struct s_print
{
	va_list	args;
	int		size;
}	t_print;

t_print	ft_init_t(t_print	*t)
{
	t->size = 0;
	return (*t);
}

#endif
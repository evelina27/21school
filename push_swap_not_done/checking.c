#include "ft_push_swap.h"
#include "libft/libft.h"

// проверка atoi
// void	check_atoi(void)
// {
// 	printf("%d\n", ft_atoi("123  12"));
// }

// проверка записи аргументов
void	check_args(int argc, char **argv)
{
	int	i;

	i = -1;
	while (++i < argc)
		printf("'%s'\n", argv[i]);
	printf("%s\n", argv[i]);
}

// проверка проверки строки
// void	check_checkstr(void)
// {
// 	printf("correct 1 (3): %d\n", ft_check_str("123  1 2"));
// 	printf("correct 2 (3): %d\n", ft_check_str(" 123  1 2"));
// 	printf("wrong char 1: %d\n", ft_check_str("123r  1 2"));
// 	printf("wrong char 2: %d\n", ft_check_str("e123  1 2"));
// 	printf("wrong char 3: %d\n", ft_check_str("123 rr 1 2"));
// 	printf("wrong char 4: %d\n", ft_check_str("123r  1 2e"));
// 	printf("wrong char 5: %d\n", ft_check_str("123r  1 2 t"));
// 	printf("no num (spaces): %d\n", ft_check_str("   "));
// }

// void	check_repeat_num(int ac, char **av)
// {
// 	int	*ar;
// 	int	i;

// 	ar = (int *)malloc(sizeof(int) * ac);
// 	if (!ar)
// 		return ;
// 	i = 0;
// 	while (av[++i])
// 		ar[i - 1] = ft_atoi((const char *)av[i]);
// 	printf("no cons. numbers: %d\n", ft_repeat_num(ar, 3));
// 	printf("cons. numbers: %d\n", ft_repeat_num(ar, 4));
// }

// void	check_numlen(void)
// {
// 	char	*c;

// 	c = "11111 11 1";
// 	printf("%s\n%d	", c, ft_numlen(c));
// 	printf("%d\n", ft_numlen(&c[6]));
// }

// void	check_ch_int(void)
// {
// 	char	*c;

// 	c = "11 999999999999";
// 	write(1, c, ft_strlen(c));
// 	write(1, "\n1:", 3);
// 	ft_check_int(c);
// 	write(1, "\n2:", 3);
// 	ft_check_int(&c[3]);
// }

void	array_change(int *a)
{
	int	c;

	c = a[0];
	a[0] = a[1];
	a[1] = c;
}

int	main(int argc, char **argv)
{
	int	*a;
	int	i;

	// check_atoi();

	// check_args(argc, argv);

	// check_repeat_num(argc, argv);

	(void)argc;
	(void)argv;

	
	// ft_error();

	// check_checkstr();

	// check_numlen();

	// check_ch_int();
}

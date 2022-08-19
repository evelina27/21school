/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_wr_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:21:31 by jeddard           #+#    #+#             */
/*   Updated: 2022/02/16 14:21:33 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// возвращает количество чисел в строке
// Error, если есть символы кроме цифр и пробелов
int	ft_check_str(char *s, int flag)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		while (s[i] && flag && s[i] == ' ')
			i++;
		if (s[i] && (s[i] < '0' || s[i] > '9'))
		{
			printf("no spaces\n"); // !
			ft_free(NULL, NULL, 1);
		}
		if (s[i] && s[i] >= '0' && s[i] <= '9')
			count++;
		while (s[i] && s[i] >= '0' && s[i] <= '9')
			i++;
	}
	return (count);
}

// возвращает общее количество чисел 
int	ft_check_all(char **all, int flag)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (all && all[++i])
		count += ft_check_str(all[i], flag);
	return (count);
}

// проверка отсортирован ли массив 
void	ft_check_sort(int *ar, int len)
{
	int	i;

	i = 0;
	while (++i < len)
	{
		if (ar[i] < ar[i - 1])
			return ;
	}
	printf("is sorted\n"); // !
	exit(0);
}

// запись в массив чисел из массива строк
int	*ft_wr_int_arr(char **argv, int argc, int *len)
{
	int	*ar;
	int	i;
	int	j;

	if (argc == 2)
		*len = ft_check_all(&argv[1], 1);
	else
		*len = ft_check_all(&argv[1], 0);
	if (*len <= 2)
		exit(0);
	ar = (int *)malloc(sizeof(int) * (*len));
	if (!ar)
		ft_free(NULL, NULL, 1);
	i = 0;
	j = 0;
	while (++i < argc)
		ft_wr_from_str(argv[i], ar, &j);
	i = -1;
	ft_check_sort(ar, *len);
	return (ar);
}

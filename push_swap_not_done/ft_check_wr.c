/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_wr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:39:38 by jeddard           #+#    #+#             */
/*   Updated: 2022/02/15 13:39:40 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// находит длину числа при условии что в строке только цифры и пробелы
int	ft_numlen(char	*n)
{
	int	i;

	i = 0;
	while (n[i] && n[i] != ' ')
		i++;
	return (i);
}

int	ft_check_int(char *num)
{
	int	n;

	n = ft_atoi(num);
	if (!ft_strncmp(ft_itoa(n), num, ft_numlen(num)))
		return (1);
	return (0);
}

// проверяет было ли уже такое число (проверка при записи чисел)
void	ft_repeat_check(int *ar, int ind)
{
	int	i;

	i = -1;
	while (++i < ind)
	{
		if (ar[i] == ar[ind])
			ft_free(NULL, ar, 1);
	}
}

void	ft_wr_from_str(char *s, int *arr, int *ind)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		arr[*ind] = ft_check_int(&s[i]);
		if (!arr[*ind])
			ft_free(NULL, arr, 1);
		arr[*ind] = ft_atoi((const char *)&s[i]);
		ft_repeat_check(arr, *ind);
		(*ind)++;
		while (s[i] && s[i] != ' ')
			i++;
	}
}

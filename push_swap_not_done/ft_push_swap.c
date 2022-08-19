/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:22:00 by jeddard           #+#    #+#             */
/*   Updated: 2022/01/28 18:50:31 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 7);
	exit(0);
}

void	ft_print_list(t_list *list)
{
	t_list	*curr;

	curr = list;
	while (curr && curr->next)
	{
		printf("%d ", curr->value);
		curr = curr->next;
	}
	printf("%d ", curr->value);
}

int	main(int argc, char **argv)
{
	int		*a;
	int		len;
	t_env	*env;
	int	i; //!

	if (argc == 1)
		exit(0);
	a = ft_wr_int_arr(argv, argc, &len);
	env = ft_init_env(a, len);
	ft_sort_arr(env, a);
	i = -1;
	// (void)i;
	while (++i < len)
		printf("%i ", a[i]);
	printf("\nmax: %d\nmin: %d\nmid: %d\n", env->max, env->min, env->mid);
	// if (len == 2)
	// 	ft_sa(&(env->st_a));
	// else if (len == 3)
	// 	ft_tiny_sort(&(env->st_a), a);
	// else if (len <= 6)
	// 	ft_small_sort(env, a, len);
	// ft_print_list(env->st_a);
	ft_free(env, a, 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:54:35 by jeddard           #+#    #+#             */
/*   Updated: 2022/02/16 11:54:36 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_destr_list(t_list *list)
{
	t_list	*curr;

	curr = list;
	while (curr && curr->next)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
}

void	ft_destr_env(t_env *env)
{	
	if (env && env->st_a)
		ft_destr_list(env->st_a);
	if (env && env->st_b)
		ft_destr_list(env->st_b);
	free(env);
}

void	ft_free(t_env *env, int *arr, int error)
{
	if (env)
		ft_destr_env(env);
	if (arr)
		free(arr);
	if (error)
	{
		write(1, "Error\n", 7);
		exit(0);
	}
}

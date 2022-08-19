/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:21:45 by jeddard           #+#    #+#             */
/*   Updated: 2022/01/28 18:50:40 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sa(t_list **a)
{
    t_list    *temp;

    temp = *a;
    *a = (*a)->next;
    (*a)->prev = NULL;
    temp->next = (*a)->next;
    temp->prev = *a;
    (*a)->next = temp;
    temp->next->prev = temp;
}

void	ft_sb(t_list **b)
{
	t_list    *temp;

    temp = *b;
    *b = (*b)->next;
    (*b)->prev = NULL;
    temp->next = (*b)->next;
    temp->prev = *b;
    (*b)->next = temp;
    temp->next->prev = temp;
}

void	ft_ss(t_env *env)
{
	ft_sa(&(env->st_a));
	ft_sb(&(env->st_b));
}

void	ft_pa(t_env *env)
{
	t_list	*tmp;

	tmp = env->st_a;
	env->st_a = env->st_b;
	env->st_b = env->st_b->next;
	env->st_a->next = tmp;
	env->st_a->next->prev = env->st_a;
	env->size_a++;
	env->size_b--;
}

void	ft_pb(t_env *env)
{
	t_list	*tmp;

	tmp = env->st_b;
	env->st_b = env->st_a;
	env->st_a = env->st_a->next;
	env->st_b->next = tmp;
	if (env->st_b->next)
		env->st_b->next->prev = env->st_b;
	env->size_b++;
	env->size_a--;
}

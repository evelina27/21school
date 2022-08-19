/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:36:17 by jeddard           #+#    #+#             */
/*   Updated: 2022/01/28 18:50:22 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_ra(t_list **a)
{
	t_list	*frst;
	t_list	*curr;

	frst = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	curr = *a;
	while (curr->next)
		curr = curr->next;
	curr->next = frst;
	frst->prev = curr;
	frst->next = NULL;
}

void	ft_rb(t_list **b)
{
	t_list	*frst;
	t_list	*curr;

	frst = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	curr = *b;
	while (curr->next)
		curr = curr->next;
	curr->next = frst;
	frst->prev = curr;
	frst->next = NULL;
}

void	ft_rr(t_env *env)
{
	ft_ra(&(env->st_a));
	ft_rb(&(env->st_b));
}

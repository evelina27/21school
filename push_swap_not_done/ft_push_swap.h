/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeddard <jeddard@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:16:50 by jeddard           #+#    #+#             */
/*   Updated: 2022/01/28 18:50:26 by jeddard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h> // убрать
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_elem	t_list;

typedef struct s_env
{
	t_list			*st_a;
	t_list			*st_b;
	unsigned int	size_a;
	unsigned int	size_b;
	int				max;
	int				min;
	int				mid;
}	t_env;

struct s_elem
{
	int				value;
	unsigned int	score;
	t_list			*next;
	t_list			*prev;
};

enum e_actID
{
	act_error = -1,
	act_nothing = 0,
	act_sa,
	act_sb,
	act_ss,
	act_pa,
	act_pb,
	act_ra,
	act_rb,
	act_rr,
	act_rra,
	act_rrb,
};

void	ft_free(t_env *env, int *arr, int error);
void	ft_wr_from_str(char *s, int *arr, int *ind);
int		*ft_wr_int_arr(char **argv, int argc, int *len);
t_env	*ft_init_env(int *ar, int len);
void	ft_tiny_sort(t_list **list, int *arr);
void	ft_small_sort(t_env *env, int *arr, int len);
void	ft_sort_arr(t_env *env, int *arr);
void	ft_print_list(t_list *list);
void    ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_env *env);
void	ft_pa(t_env *env);
void	ft_pb(t_env *env);
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rr(t_env *env);
void	ft_rra(t_list **list);
void	ft_rrb(t_list **list);
void	ft_rrr(t_env *env);

#endif

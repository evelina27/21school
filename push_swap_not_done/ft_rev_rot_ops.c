#include "ft_push_swap.h"

void	ft_rra(t_list **list)
{
	t_list	*curr;
	t_list	*last;

	curr = *list;
	while (curr && curr->next)
		curr = curr->next;
	last = curr;
	curr = curr->prev;
	curr->next = NULL;
	last->prev = NULL;
	last->next = *list;
	*list = last;
	(*list)->next->prev = *list;
}

void	ft_rrb(t_list **list)
{
	t_list	*curr;
	t_list	*last;

	curr = *list;
	while (curr && curr->next)
		curr = curr->next;
	last = curr;
	curr = curr->prev;
	curr->next = NULL;
	last->prev = NULL;
	last->next = *list;
	*list = last;
	(*list)->next->prev = *list;
}

void	ft_rrr(t_env *env)
{
	ft_rra(&(env->st_a));
	ft_rrb(&(env->st_b));
}

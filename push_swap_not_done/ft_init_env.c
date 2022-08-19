#include "ft_push_swap.h"

t_list	*ft_add_elem(int val, t_list *prv)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->value = val;
	elem->score = 0;
	elem->next = NULL;
	elem->prev = prv;
	return (elem);
}

void	ft_init_stack_a(t_env *env, int *arr, int len)
{
	int		i;
	t_list	*list;

	env->st_a = ft_add_elem(arr[0], NULL);
	if (!env->st_a)
		ft_free(env, arr, 1);
	list = env->st_a;
	list->score = 0;
	i = 0;
	while (++i < len)
	{
		list->next = ft_add_elem(arr[i], list);
		if (!list->next)
			ft_free(env, arr, 1);
		if (i > (len - 1) / 2)
			list->score = len - i;
		else
			list->score = i;
		list = list->next;
	}
}

// инициализация env
// если память не выделяется возвращает NULL
t_env	*ft_init_env(int *ar, int len)
{
	t_env	*e;

	e = (t_env *)malloc(sizeof(t_env));
	if (!e)
		ft_free(e, ar, 1);
	ft_init_stack_a(e, ar, len);
	e->st_b = NULL;
	e->size_a = len;
	e->size_b = 0;
	e->max = 0;
	e->mid = 0;
	e->min = 0;
	return (e);
}

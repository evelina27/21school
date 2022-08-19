#include "ft_push_swap.h"

int	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;

	return (1);
}

void	ft_sort_arr(t_env *env, int *arr) //?
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (arr && i + 1 < env->size_a && !flag)
	{
		if ((unsigned int)i < env->size_a && arr[i] > arr[2 * i + 1])
			flag = ft_swap(&arr[i], &arr[2 * i + 1]);
		if ((unsigned int)(2 * i + 2) < env->size_a && arr[i] > arr[2 * i + 2])
			flag = ft_swap(&arr[i], &arr[2 * i + 2]);
		i++;
		if (flag == 1 && (unsigned int)(i * i) >= env->size_a)
		{
			i = 0;
			flag = 0;
		}
	}
	env->min = arr[0];
	env->max = arr[env->size_a - 1];
	env->mid = arr[(env->size_a - 1) / 2];
}

unsigned int	ft_find_value(int *arr, int val, int len)
{
	int	i;

	i = -1;
	while (++i < len)
	{
		if (arr[i] == val)
			return ((unsigned int)i);
	}
	return (0);
}

void ft_set_score(t_env *env, int *arr)
{
	t_list			*temp;
	unsigned int	pos;
	unsigned int	len;
	
	temp = env->st_a;
	len = env->size_a;
	while (temp->next)
	{
		if ((pos = ft_find_value(arr, temp->value, len)) > (len - 1) / 2)
			temp->score += len - pos;
		else
			temp->score += pos;
		temp = temp->next;
	}
}

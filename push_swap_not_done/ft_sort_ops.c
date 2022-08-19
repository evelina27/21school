#include "ft_push_swap.h"

void	ft_tiny_sort(t_list **list, int *arr)
{
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
		ft_sa(list);
	else if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		ft_sa(list);
		ft_rra(list);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ft_ra(list);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
	{
		ft_sa(list);
		ft_ra(list);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
		ft_rra(list);
}

// void	ft_small_sort(t_env *env, int *arr, int len)
// {
// 	int		i;

	
// 	i = -1;
// 	//функция для поиска мин макс и мид
// 	while (++i < len - 3)
// 		ft_pb(env);
// 	ft_tiny_sort(&(env->st_a), &arr[len - 3]);
// 	if (len - 3 == 3)
// 		ft_tiny_sort(&(env->st_b), arr);
// 	else if (len - 3 == 2 && arr[0] > arr [1])
// 		ft_sb(&(env->st_b));
// 	while (env->st_b)
// 	{
// 		if (env->st_b->value < env->st_a->value)
// 			ft_pa(env);
// 		ft_ra(&(env->st_a));
// 	}
// 	printf("small sort, len = %d\nstack a:	", len - 3);
// 	ft_print_list(env->st_a);
// 	printf("\nstack b:	");
// 	// ft_print_list(env->st_b);
// 	while (env->st_a->value != )
// 	printf("\n");
// }

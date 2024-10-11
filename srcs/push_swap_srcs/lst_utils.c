#include "push_swap.h"

int	is_same(t_list *lst, int val)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if ((long long int)(lst)->data == val)
			return (1);
		lst = (lst)->next;
	}
	return (0);
}

void	ft_lstprint(t_list *lst, t_list *lst2)
{
	if (!lst && !lst2)
		return ;
	printf("  ______________    ______________ \n");
	printf(" |\e[94m      [A]     \e[0m| ");
	printf(" |\e[93m      [B]     \e[0m| ");
	printf("\n");
	while (lst || lst2)
	{
		if (lst)
			printf(" | \e[94m%-12lld\e[0m | ", (long long int)(lst)->data);
		else
			printf(" | \e[94m%12c\e[0m | ", ' ');
		if (lst2)
			printf(" | \e[93m%-12lld\e[0m | ", (long long int)(lst2)->data);
		else
			printf(" | \e[94m%12c\e[0m | ", ' ');
		printf("\n");
		if (lst)
			lst = (lst)->next;
		if (lst2)
			lst2 = (lst2)->next;
	}
	printf(" |______________|  |______________|\n");
}

long long	get_lst_index(t_list *stack, int pos)
{
	int	i;

	i = 0;
	while (i < pos && stack)
	{
		i++;
		stack = stack->next;
	}
	if (i == pos)
		return ((long long int)stack->data);
	return (-2147483649);
}

int	ft_verif(t_list *lst, t_list *lst2)
{
	long long	tmp;

	tmp = -2147483649;
	if (!lst || lst2)
		return (0);
	while (lst)
	{
		if ((long long int)lst->data < tmp && tmp != -2147483649)
		{
			return (0);
		}
		tmp = (long long int)lst->data;
		lst = (lst)->next;
	}
	return (1);
}

void	lstdel(void *data)
{
	data = NULL;
	(void)data;
}

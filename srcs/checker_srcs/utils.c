#include "checker.h"

void	errors(int type, t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a, lstdel);
	ft_lstclear(stack_b, lstdel);
	if (type == 1)
		ft_putstr_fd("Error\n", 1);
	if (type == 2)
		ft_putstr_fd("KO\n", 1);
	exit(EXIT_FAILURE);
}

void	lstdel(void *data)
{
	data = NULL;
	(void)data;
}

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

int	is_integers(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] != ' ' && str[i] != '-' && str[i] != '+'
			&& (str[i] < '0' || str[i] > '9'))
			return (0);
	return (1);
}

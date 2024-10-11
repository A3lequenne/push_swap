#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*tmp;

	n = 0;
	tmp = lst;
	while (tmp)
	{
		n++;
		tmp = tmp->next;
	}
	return (n);
}

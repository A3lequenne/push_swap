#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	tmp = *lst;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->data);
		free(*lst);
		*lst = tmp;
	}
	lst = NULL;
}

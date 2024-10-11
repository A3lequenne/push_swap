#include "../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del((lst->data));
		free(lst);
		lst = NULL;
	}
}

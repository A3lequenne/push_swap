#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin_list;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	begin_list = ft_lstnew(f(lst->data));
	if (!begin_list)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->data));
		if (!new)
		{
			ft_lstclear(&begin_list, del);
			return (NULL);
		}
		ft_lstadd_back(&begin_list, new);
		lst = lst->next;
	}
	return (begin_list);
}

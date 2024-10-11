#include "../includes/libft.h"

t_list	*ft_lstnew(void *data)
{
	t_list	*new_link;

	new_link = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!new_link)
		return (NULL);
	new_link->next = NULL;
	new_link->data = data;
	return (new_link);
}

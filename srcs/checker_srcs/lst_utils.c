#include "checker.h"

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

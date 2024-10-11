#include "../includes/libft.h"

int	ft_abs(int n)
{
	if (n == INT_MIN)
		return (INT_MAX);
	if (n < 0)
		return (n * -1);
	return (n);
}

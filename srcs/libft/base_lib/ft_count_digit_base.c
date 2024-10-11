#include "../includes/libft.h"

int	ft_count_digit_base(uintmax_t n, unsigned int base)
{
	int	count;

	count = 1;
	while (n >= base)
	{
		n /= base;
		count++;
	}
	return (count);
}

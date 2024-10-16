#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int					neg;
	unsigned long long	res;
	int					i;
	int					len;

	res = 0;
	i = 0;
	neg = 1;
	len = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || \
	str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		neg = 1 - ((str[i++] == '-') * 2);
	while (str[i] >= '0' && str[i] <= '9' && ++len)
		res = (res * 10) + str[i++] - '0';
	if (res > LONG_MAX || len > 19)
		return (0 - (neg > 0));
	return (res * neg);
}

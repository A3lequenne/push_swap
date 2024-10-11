#include "../includes/libft.h"

void	ft_putpad(int len, char zero, t_arg *arg)
{
	if (len <= 0)
		return ;
	arg->return_val += len;
	if (zero)
	{
		while (--len >= 0)
			write(arg->fd, "0", 1);
	}
	else
	{
		while (--len >= 0)
			write(arg->fd, " ", 1);
	}
}

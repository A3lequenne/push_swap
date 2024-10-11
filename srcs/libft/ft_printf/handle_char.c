#include "../includes/libft.h"

void	handle_char(va_list ap, t_arg *arg, char **format)
{
	char	c;

	c = va_arg(ap, int);
	if (!arg->just_left)
		ft_putpad(arg->width - 1, arg->zero_flag, arg);
	arg->return_val += write(arg->fd, &c, 1);
	if (arg->just_left)
		ft_putpad(arg->width - 1, 0, arg);
	(*format)++;
}

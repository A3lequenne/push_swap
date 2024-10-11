#include "../includes/libft.h"

void	handle_str(va_list ap, t_arg *arg, char **format)
{
	char	*str;
	int		len;

	str = va_arg(ap, char *);
	if (str)
		len = ft_strlen(str);
	else
		len = 6;
	if (arg->precision >= 0 && arg->precision < len)
		len = arg->precision;
	if (arg->width > len && !arg->just_left)
		ft_putpad(arg->width - len, arg->zero_flag, arg);
	if (!str)
		arg->return_val += write(arg->fd, "(null)", len);
	else
		arg->return_val += write(arg->fd, str, len);
	if (arg->width > len && arg->just_left)
		ft_putpad(arg->width - len, 0, arg);
	(*format)++;
}

#include "../includes/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		return_val;

	va_start(ap, format);
	return_val = parse_format((char **)&format, ap, 1);
	va_end(ap);
	return (return_val);
}

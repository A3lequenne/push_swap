#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	char	*tmp_s;

	tmp_s = (char *)s;
	while (*tmp_s)
		tmp_s++;
	return (tmp_s - s);
}

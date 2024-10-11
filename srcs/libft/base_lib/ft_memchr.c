#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *)s;
	while (n--)
	{
		if (*tmp_s == (unsigned char)c)
			return (tmp_s);
		tmp_s++;
	}
	return (NULL);
}

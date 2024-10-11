#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	unsigned char	tmp_c;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	tmp_c = (unsigned char)c;
	while (n--)
	{
		if (*tmp_src == tmp_c)
		{
			*tmp_dst = *tmp_src;
			return ((void *)++tmp_dst);
		}
		*(tmp_dst++) = *(tmp_src++);
	}
	return (NULL);
}

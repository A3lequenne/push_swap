#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!src && !dst && n)
		return (dst);
	while (n--)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}

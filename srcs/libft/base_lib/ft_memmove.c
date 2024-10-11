#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if ((!src && !dst && len) || (dst == src))
		return (dst);
	if (tmp_src < tmp_dst && tmp_src + len > tmp_dst)
	{
		while (len--)
			*(tmp_dst + len) = *(tmp_src + len);
	}
	else
	{
		while (len--)
			*(tmp_dst++) = *(tmp_src++);
	}
	return (dst);
}

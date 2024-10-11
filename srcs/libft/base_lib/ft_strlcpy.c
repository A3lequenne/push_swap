#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	char	*tmp_src;

	tmp_src = (char *)src;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!dstsize)
		return (src_len);
	while (*tmp_src && ((size_t)(tmp_src - src)) < (dstsize - 1))
		*(dst++) = *(tmp_src++);
	*dst = 0;
	return (src_len);
}

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*area;
	size_t			r;
	unsigned char	*tmp;

	r = count * size;
	area = (void *)malloc(r);
	if (!area)
		return (NULL);
	tmp = area;
	while (r--)
		*(tmp++) = 0;
	return (area);
}

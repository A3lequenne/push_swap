#include "../includes/libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	int	i;
	int	len;

	if (!s1 || !s2)
		return (0);
	len = (int)ft_strlen(s1);
	if (len != (int)ft_strlen(s2))
		return (0);
	i = -1;
	while (++i < len)
		if (s1[i] != s2[i])
			return (0);
	return (1);
}

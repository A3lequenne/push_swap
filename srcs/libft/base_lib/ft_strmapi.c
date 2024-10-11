#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = -1;
	len = ft_strlen(s);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (++i < len)
		res[i] = f(i, (char)s[i]);
	return (res);
}

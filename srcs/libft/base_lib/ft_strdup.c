#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dup_str;
	char	*tmp;

	tmp = (char *)s1;
	while (*tmp)
		tmp++;
	len = tmp - s1;
	dup_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dup_str)
		return (NULL);
	while (*s1)
		*(dup_str++) = *(s1++);
	return (dup_str - len);
}

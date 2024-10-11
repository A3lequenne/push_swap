#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	i = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)ft_calloc(i + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (*s1)
		*(new++) = *(s1++);
	while (*s2)
		*(new++) = *(s2++);
	return (new - i);
}

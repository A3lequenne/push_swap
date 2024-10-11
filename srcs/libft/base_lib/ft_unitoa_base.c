#include "../includes/libft.h"

char	*ft_unitoa_base(uintmax_t nb, char *base_tab, size_t base)
{
	char	*tab;
	int		i;

	tab = NULL;
	i = ft_count_digit_base(nb, base);
	tab = (char *)ft_calloc(i + 1, sizeof(char));
	if (!tab)
		return (NULL);
	tab[i] = 0;
	i--;
	if (!nb)
		tab[i] = '0';
	while (nb)
	{
		tab[i--] = base_tab[nb % base];
		nb /= base;
	}
	return (tab);
}

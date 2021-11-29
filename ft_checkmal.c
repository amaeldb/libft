#include "libft.h"

int	ft_checkmal(char **str, int size)
{
	int	i;
	int	f;

	i = -1;
	f = 0;
	while (++i < size)
		if (!str[i])
			f = 1;
	i = -1;
	if (f)
	{
		while (++i < size)
			free(str[i]);
		free(str);
		return (1);
	}
	return (0);
}

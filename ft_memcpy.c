#include <string.h>

int	check_overlap(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t  j;

	i = 0;
	while (src[i] && i < n)
	{
		j = 0;
		while (dest[j])
		{
			if (&src[i] == &dest[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (check_overlap(dest, src, n))
		return (dest);
	while (src[i] && dest[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
}

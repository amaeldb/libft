#include <string.h>

int	check_overlap(char *dest, char *src, size_t n)
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
	char	*strd;
	char	*strs;

	i = 0;
	strd = (char*)dest;
	strs = (char*)src;
	if (check_overlap(strd, strs, n))
		return ((void*)strd);
	while (strs[i] && strd[i] && i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return ((void*)strd);
}

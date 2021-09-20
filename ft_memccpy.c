#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char *destPh;
	char *srcPh;

	destPh = (char*)dest;
	srcPh = (char*)src;
	i = 0;
	while (srcPh[i] && destPh[i] && i < n)
	{
		destPh[i] = srcPh[i];	
		if (srcPh[i] == c)
			return (&destPh[++i]);
		i++;
	}
	if (i < n || srcPh[i] || destPh[i])
		return (NULL);
	return (&destPh[i]);
}

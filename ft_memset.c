#include <string.h>

void	ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	c1;

	c1 = (unsigned char)c;
	i = 0;
	while (i < n && s[i])
	{
		s[i] = c1;
		i++;
	}
}

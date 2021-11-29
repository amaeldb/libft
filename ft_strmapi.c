#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	char	**ph;
	int	i;
	int	size;
	int	retsize;

	size = ft_strlen(s);
	retsize = 1;
	ph = malloc(sizeof(char *) * size);
	if (!ph)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		retsize += ft_strlen((*f)(i, s[i]));
	}
	ret = malloc(sizeof(char) * retsize);
	if (!ret)
		return (NULL);

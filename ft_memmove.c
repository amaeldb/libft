#include <string.h>

void *memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *temp;

	temp = ft_strncpy(dest, src, n);
	i = 0;


#include "libft.h"

char	*ret_z()
{
	char	*ret;

	ret = malloc(sizeof(char) * 2);
	if (!ret)
		return (NULL);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);	
}

char	*ret_alloc(int size, int n, int neg)
{
	int	i;
	char	*ret;

	ret = malloc(sizeof(char) * size + 1);
	if (!ret)
		return (NULL);
	i = -1;
	if (neg)
		ret[++i] = '-';
	while (n > 0)
	{
		ret[++i] = '0' + (n % 10);
		n /= 10;
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	int	temp;
	int	size;
	int	neg;

	neg = 0;
	size = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
		size++;
	}
	temp = n;
	if (n = 0)
		return (ret_z());
	while (temp > 0)
	{
		size++;
		temp /= 10;
	}
	return (ret_alloc(size, n, neg));
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "libft.h"

void	print_spacing(char *name)
{
	int	i = -1;

	printf("\n\n");
	while (++i < 80)
		write(1, "-", 1);
	printf("\n\n\n");
	printf("Function : %s\n", name);
}

char	*get_str(char *str)
{
	char *ret = malloc(100);
	printf("Set value for %s: ", str);
	scanf("%s", ret);
	return (ret);

}

int    get_int(char *str)
{
	int	ret;
	printf("Set value for %s: ", str);
	scanf("%d", &ret);
	return (ret);
}

int	main(void)
{
	char	*dest = malloc(100), *src = malloc(100), *dest1 = malloc(100), *src1 = malloc(100);
	int	cont = 1, n, n1, c_int, c_int1;
	print_spacing("memset");
	while (cont)
	{
		printf("\n");
		dest = get_str("s");
		ft_strcpy(dest1, dest);
		c_int = get_int("c");
		c_int1 = c_int;
		n = get_int("n");
		n1 = n;
		printf("\nFT: Return = %s\n", ft_memset((void*)dest, c_int, (size_t)n));
		printf("Original: Return = %s\n\n", memset((void*)dest1, c_int1, (size_t)n1));
		cont = get_int("Continue (1 : 0)");
	}
	cont = 1;
	print_spacing("bzero");
	while (cont)
	{
		printf("\n");
		dest = get_str("s");
		ft_strcpy(dest1, dest);
		n = get_int("n");
		n1 = n;
		ft_bzero((void*)dest, (size_t)n);
		bzero((void*)dest1, (size_t)n1);
		printf("\nFT: Return = %s\nOriginal: Return = %s\n\n", dest, dest1);
		cont = get_int("Continue (1 : 0)");
	}
	cont = 1;
	print_spacing("memcpy");
	while (cont)
	{
		printf("\n");
		dest = get_str("dest");
		ft_strcpy(dest1, dest);
		src = get_str("src");
		ft_strcpy(src1, src);
		n = get_int("n");
		n1 = n;
		printf("\nFT: Return = %s\nOriginal: Return = %s\n\n", ft_memcpy((void*)dest, (const void*) src, (size_t)n), memcpy((void*)dest1, (const void*) src1, (size_t)n1));
		cont = get_int("Continue (1 : 0)");
	}
	cont = 1;
	print_spacing("memccpy");
	while (cont)
	{
		printf("\n");
		dest = get_str("dest");
		ft_strcpy(dest1, dest);
		src = get_str("src");
		ft_strcpy(src1, src);
		c_int = get_int("c");
		c_int1 = c_int;
		n = get_int("n");
		n1 = n;
		printf("\nFT: Return = %s, dest = %s\nOriginal: Return = %s, dest = %s\n\n", ft_memccpy((void*)dest, (const void*) src, c_int, (size_t)n), dest, memccpy((void*)dest1, (const void*) src1, c_int1, (size_t)n1), dest1);
		cont = get_int("Continue (1 : 0)");
	}
}
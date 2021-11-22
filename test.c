#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ret_check(int i1, int i2)
{
	if ((i1 == 0 && i2 == 0) || (i1 > 0 && i2 > 0) || (i1 < 0 && i2 < 0))
		return (1);
	return (0);
}


int main()
{
	if ((isalpha('a') != 0) == ft_isalpha('a') && (isalpha('Z') != 0) == ft_isalpha('Z') && (isalpha(55) != 0) == ft_isalpha(55) && (isalpha(0) != 0) == ft_isalpha(0))
		printf("ft_isalpha = SUCCESS\n");
	else
		printf("ft_isalpha = FAILURE\n");

	if ((isdigit('a') != 0) == ft_isdigit('a') && (isdigit('Z') != 0) == ft_isdigit('Z') && (isdigit(55) != 0) == ft_isdigit(55) && (isdigit(0) != 0) == ft_isdigit(0))
		printf("ft_isdigit = SUCCESS\n");
	else
		printf("ft_isdigit = FAILURE\n");

	if ((isalnum('a') != 0) == ft_isalnum('a') && (isalnum('Z') != 0) == ft_isalnum('Z') && (isalnum(55) != 0) == ft_isalnum(55) && (isalnum(0) != 0) == ft_isalnum(0))
		printf("ft_isalnum = SUCCESS\n");
	else
		printf("ft_isalnum = FAILURE\n");

	if ((isascii('a') != 0) == ft_isascii('a') && (isascii('Z') != 0) == ft_isascii('Z') && (isascii(55) != 0) == ft_isascii(55) && (isascii(0) != 0) == ft_isascii(0))
		printf("ft_isascii = SUCCESS\n");
	else
		printf("ft_isascii = FAILURE\n");

	if ((isprint('a') != 0) == ft_isprint('a') && (isprint('Z') != 0) == ft_isprint('Z') && (isprint(55) != 0) == ft_isprint(55) && (isprint(0) != 0) == ft_isprint(0))
		printf("ft_isprint = SUCCESS\n");
	else
		printf("ft_isprint = FAILURE\n");

	if (strlen("") == ft_strlen("") && strlen("Hello") == ft_strlen("Hello"))
		printf("ft_strlen = SUCCESS\n");
	else
		printf("ft_strlen = FAILURE\n");

	void *ptr = malloc(100), *ptr1 = malloc(100);
	if (!ft_memcmp(memset(ptr, 10, 10),ft_memset(ptr1, 10, 10), 1) && !ft_memcmp(memset(ptr, 10, 2), ft_memset(ptr1, 10, 2), 30))
		printf("ft_memset = SUCCESS\n");
	else
		printf("ft_memset = FAILURE\n");
	free(ptr);
	free(ptr1);

	if (ret_check(strncmp("", "", 3), ft_strncmp("", "", 3)) && ret_check(strncmp("Helio Vorld", "Hello World", 4), ft_strncmp("Helio Vorld", "Hello World", 4)))
		printf("ft_strncmp = SUCCESS\n");
	else
		printf("ft_strncmp = FAILURE\n");
}

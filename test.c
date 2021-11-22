#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main()
{
	if (isalpha('a') == ft_isalpha('a') && isalpha('Z') == ft_isalpha('Z') && isalpha(55) == ft_isalpha(55) && isalpha(0) == ft_isalpha(0))
		printf("ft_isalpha = SUCCESS\n");
	else
		printf("ft_isalpha = FAILURE\n");

	if (isdigit('a') == ft_isdigit('a') && isdigit('Z') == ft_isdigit('Z') && isdigit(55) == ft_isdigit(55) && isdigit(0) == ft_isdigit(0))
		printf("ft_isdigit = SUCCESS\n");
	else
		printf("ft_isdigit = FAILURE\n");

	if (isalnum('a') == ft_isalnum('a') && isalnum('Z') == ft_isalnum('Z') && isalnum(55) == ft_isalnum(55) && isalnum(0) == ft_isalnum(0))
		printf("ft_isalnum = SUCCESS\n");
	else
		printf("ft_isalnum = FAILURE\n");

	if (isascii('a') == ft_isascii('a') && isascii('Z') == ft_isascii('Z') && isascii(55) == ft_isascii(55) && isascii(0) == ft_isascii(0))
		printf("ft_isascii = SUCCESS\n");
	else
		printf("ft_isascii = FAILURE\n");

	if (isprint('a') == ft_isprint('a') && isprint('Z') == ft_isprint('Z') && isprint(55) == ft_isprint(55) && isprint(0) == ft_isprint(0))
		printf("ft_isprint = SUCCESS\n");
	else
		printf("ft_isprint = FAILURE\n");

	if (strlen("") == ft_strlen("") && strlen("Hello") == ft_strlen("Hello"))
		printf("ft_strlen = SUCCESS\n");
	else
		printf("ft_strlen = FAILURE\n");

	void *ptr = malloc(100), *ptr1 = malloc(100);
	printf("%d\n", ft_memcmp(memset(ptr, 10, 10), ft_memset(ptr1, 10, 3), 4));
/*	if (ft_memcmp(memset(""),ft_memset(""), 100) && memset("Hello") == ft_memset("Hello"))
		printf("ft_memset = SUCCESS\n");
	else
		printf("ft_memset = FAILURE\n");
*/
	if (strncmp("", "", 3) == ft_strncmp("", "", 3) && strncmp("Helio Vorld", "Hello World", 4) == ft_strncmp("Helio Vorld", "Hello World", 4))
		printf("ft_strncmp = SUCCESS\n");
	else
		printf("ft_strncmp = FAILURE\n");
}

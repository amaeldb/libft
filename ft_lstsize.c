#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

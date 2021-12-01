#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	struct t_list	*nxt;

	while (*lst != NULL)
	{
		nxt = *lst->next;
		(*del)(*lst);
		free(*lst);
		*lst = nxt;
	}
	free(lst);
}

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	struct t_list	*last;

	last = ft_lstlast(*alst);
	last->next = new;
}

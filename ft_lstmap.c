#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	struct t_list	*ret;
	int		i;

	i = ft_lstsize(lst);
	ret = (t_list *)malloc(sizeof(t_list) * i);
	if (!ret)
		return (NULL);
	while (lst != NULL)
	{
		ft_lstadd_back(&ret, ft_lstnew((*f)(lst->content)));
		lst = lst->next;
	}
	

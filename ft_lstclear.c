#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lst2;

	if (!lst || !del)
		return ;
	lst2 = *lst;
	while (lst2)
	{
		tmp = lst2->next;
		del(lst2->content);
		free(lst2);
		lst2 = tmp;
	}
	*lst = NULL;
}

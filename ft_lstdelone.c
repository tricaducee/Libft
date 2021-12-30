#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
//	t_list	*tmp;

	if (lst && del)
	{
//		tmp = lst;
//		lst = lst->next;
		del(lst->content);
		free(lst);
	}
}

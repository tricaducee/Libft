#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	lst_result;

	if (!lst || !f || !del)
		return (NULL);
	lst_result->content = f(lst->content);
	while (lst)
	{
		
}

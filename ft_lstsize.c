#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*tmp;

	if (!lst)
		return (0);
	i = 1;
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}	

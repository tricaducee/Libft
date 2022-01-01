/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 17:48:14 by hrolle            #+#    #+#             */
/*   Updated: 2022/01/01 18:28:51 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*start;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	start = newlst;
	while (lst->next)
	{
		lst = lst->next;
		newlst->next = ft_lstnew(f(lst->content));
		if (!newlst->next)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		newlst = newlst->next;
	}
	newlst = NULL;
	return (start);
}

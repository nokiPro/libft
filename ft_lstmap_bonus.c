/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daiki-ogawa <daiki-ogawa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:47:12 by daiki-ogawa       #+#    #+#             */
/*   Updated: 2021/08/16 19:16:46 by daiki-ogawa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newLst;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	newLst = ft_lstnew(f(lst->content));
	if (!newLst)
		return (NULL);
	tmp = newLst;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&newLst, del);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (newLst);
}

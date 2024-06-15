/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:08:48 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/13 12:37:02 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*nd;

	if (!lst || !f || !del)
		return ((void *)0);
	new_lst = ((void *)0);
	while (lst)
	{
		nd = ft_lstnew((*f)(lst->content));
		if (!nd)
		{
			ft_lstclear(&new_lst, del);
			return ((void *)0);
		}
		ft_lstadd_back(&new_lst, nd);
		lst = lst->next;
	}
	return (new_lst);
}

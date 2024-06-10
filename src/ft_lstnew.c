/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:50:01 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 14:01:40 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;
	char	*c;
	t_list	*tl;

	node = malloc(sizeof(t_list));
	tl = malloc(sizeof(t_list));
	c = ft_strdup(content);
	node->content = c;
	node->next= (void *)0;
	return (node);
}
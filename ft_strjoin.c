/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:58:31 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:58:31 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r1;

	if (!s1 || !s2)
		return ((void *)0);
	r1 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!r1)
		return ((void *)0);
	ft_strlcpy(r1, s1, ft_strlen(s1) + 1);
	ft_strlcpy(r1 + ft_strlen(s1) , s2, ft_strlen(s2) + 1);
	return (r1);
}

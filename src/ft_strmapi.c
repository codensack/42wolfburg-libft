/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:58:54 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:58:54 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r1;
	char			*r2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	r1 = malloc(ft_strlen(s) + 1);
	if (!r1)
		return (NULL);
	r2 = r1;
	i = 0;
	while (*(s + i))
	{
		*r1++ = (*f)(i, *(s + i));
		i++;
	}
	*r1 = '\0';
	return (r2);
}

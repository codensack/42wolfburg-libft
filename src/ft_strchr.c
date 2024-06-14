/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:58:14 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:58:14 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** The  strchr() function returns a pointer to the first occurrence of the
** character c in the string s.
** Check for \0 at the end!
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!*s && !(char)c)
		return ((char *)s);
	return (NULL);
}

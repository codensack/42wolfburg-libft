/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:57:38 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:57:38 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** char is one byte of size
*/

void	*ft_memset(void *s, int c, size_t n)
{
	void	*r;

	r = s;
	while (n--)
		*(char *)s++ = (char)c;
	return (r);
}

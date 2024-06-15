/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:57:32 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:57:32 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*r;

	if (!dest && !src)
		n = 0;
	r = dest;
	if (dest < src)
		while (n--)
			*(char *)dest++ = *(char *)src++;
	else
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	return (r);
}

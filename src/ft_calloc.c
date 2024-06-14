/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:55:40 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:55:40 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** calloc()
** The  calloc() function allocates memory for an array of nmemb elements of size
** bytes each and returns a pointer to the allocated memory.  The memory  is  set
** to  zero.  If nmemb or size is 0, then calloc() returns a unique pointer value
** that can later be successfully passed to free(). -> so malloc does!
**
** If the multiplication of nmemb and size would result in integer overflow, then
** calloc()  returns an error.  By contrast, an integer overflow would not be de‐
** tected in the following call to malloc(), with the result that an  incorrectly
** sized block of memory would be allocated:
** malloc(nmemb * size);
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	if (nmemb > INT_MAX / size)
		return ((void *)0);
	r = malloc(nmemb * size);
	if (!r)
		return (r);
	ft_bzero(r, nmemb * size);
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:58:36 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:58:36 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** The strlcat() function appends the NUL-terminated string src to the end
** of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
** nating the result.
** For strlcat() that means the initial length of dst plus the length of src. 
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (src_len + size);
	ft_strlcpy(dst + dst_len, src, size - dst_len);
	return (dst_len + src_len);
}

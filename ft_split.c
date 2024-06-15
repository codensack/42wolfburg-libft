/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:58:06 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:58:06 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_substrings(const char *s, char c);
static char	*ft_get_substring(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	char	**r;

	if (!s)
		return (NULL);
	r = malloc((ft_count_substrings(s, c) + 1) * sizeof(char *));
	if (!r)
		return (NULL);
	tmp = r;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			*(tmp++) = ft_get_substring(s, c);
		while (*s != c && *s)
			s++;
	}
	*tmp = NULL;
	return (r);
}

static int	ft_count_substrings(const char *s, char c)
{
	int		counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			counter++;
		while (*s != c && *s)
			s++;
	}
	return (counter);
}

static char	*ft_get_substring(char const *s, char c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*s != c && *s)
	{
		s++;
	}
	return (ft_substr(tmp, 0, s - tmp));
}

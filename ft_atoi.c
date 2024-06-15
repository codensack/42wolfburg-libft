/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:54:51 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:54:51 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_whitespace_char(char c);

int	ft_atoi(const char *nptr)
{
	int	r;
	int	sign;

	r = 0;
	sign = 1;
	while (ft_is_whitespace_char(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		r = r * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * r);
}

static int	ft_is_whitespace_char(char c)
{
	int	r;

	r = 0;
	if (c == ' ' || c == '\t' || c == '\n')
		r = 1;
	else if (c == '\f' || c == '\r' || c == '\v')
		r = 1;
	return (r);
}

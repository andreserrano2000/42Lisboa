/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:35:48 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 15:41:54 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	*d = dest;
	*s = src;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = destsize - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	return (dlen + (s - src));
}

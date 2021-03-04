/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:48:40 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 17:08:43 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*res;

	res = (char*)malloc(sizeof(*s) * (len + 1));
	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		if (a >= start && b < len)
		{
			res[b] = s[a];
			b++;
		}
		a++;
	}
	return (res);
}

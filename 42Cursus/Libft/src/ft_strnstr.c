/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:56:55 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 14:59:37 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int a;
	int b;
	int g;

	a = 0;
	b = 0;
	c = 0;
	while (a < len && big[a] != '\0')
	{
		g = a;
		b = 0;
		while (big[a] == little[b] && little[b] != '\0')
		{
			b++;
			a++;
		}
		if (ft_strlen(little) == b)
		{
			return (big + g);
		}
		a = g + 1;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:12:45 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 13:02:29 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		a;
	int		b;
	char	*res;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] == c)
		{
			res = str + a;
			return (res);
		}
		a++;
	}
	return (0);
}

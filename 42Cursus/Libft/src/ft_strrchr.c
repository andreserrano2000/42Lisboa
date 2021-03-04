/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:50:11 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 16:14:19 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*res;
	int		a;

	a = ft_strlen(str) - 1;
	while (a >= 0)
	{
		if (str[a] == c)
		{
			res = str + a;
			return (res);
		}
		a--;
	}
	return (0);
}

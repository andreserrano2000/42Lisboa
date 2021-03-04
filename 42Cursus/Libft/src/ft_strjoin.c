/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:11:28 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 17:38:29 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		len1;
	int		len2;
	char	*res;

	a = 0;
	b = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	while (s1[a] != '\0')
	{
		res[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		res[a] = s2[b];
		b++;
		a++;
	}
	res[a] = '\0';
	return (res);
}

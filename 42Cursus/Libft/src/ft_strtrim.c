/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:25:30 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 19:27:12 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	a = 0;
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	b = ft_strlen(s1 + a);
	if (b)
		while (s1[b + a - 1] != 0 && ft_strchr(set, s1[b + a - 1]) != 0)
			b--;
	if (!(res = malloc(sizeof(char) * b + 1)))
		return (NULL);
	ft_strncpy(res, s1 + a, b);
	res[b] = '\0';
	return (res);
}

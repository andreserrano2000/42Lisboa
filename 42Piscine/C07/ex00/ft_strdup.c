/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:04:38 by anserran          #+#    #+#             */
/*   Updated: 2020/11/07 17:54:34 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		a;
	int		size;
	char	*nova;

	size = 0;
	while (src[size])
		size++;
	if (!(nova = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	a = 0;
	while (src[a])
	{
		nova[a] = src[a];
		a++;
	}
	nova[a] = '\0';
	return (nova);
}

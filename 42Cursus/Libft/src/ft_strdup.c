/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:41:00 by anserran          #+#    #+#             */
/*   Updated: 2021/03/03 16:41:29 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dest;
	int		string_len;
	int		i;

	string_len = 0;
	while (string[string_len])
		string_len++;
	if (!(dest = (char *)malloc(sizeof(char) * (string_len + 1))))
		return (NULL);
	i = 0;
	while (i < string_len)
	{
		dest[i] = string[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

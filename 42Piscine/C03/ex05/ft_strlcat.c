/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:06:50 by anserran          #+#    #+#             */
/*   Updated: 2020/11/03 15:44:12 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	b = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	while (dest[b] && b < size)
		b++;
	while (src[a] && (a + b + 1) < size)
	{
		dest[b + a] = src[a];
		a++;
	}
	if (a + b < size)
		dest[a + b] = '\0';
	return (b + c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 10:56:05 by anserran          #+#    #+#             */
/*   Updated: 2020/11/04 21:18:38 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	ft_putnbr(int nb)
{
	long int	a;
	long int	b;
	char		c;

	a = (long int)nb;
	if (a == 0)
		write(1, "0", 1);
	if (a < 0)
	{
		a *= -1;
		write(1, "-", 1);
	}
	b = 0;
	while (a > 0)
	{
		b = (10 * b) + a % 10;
		a /= 10;
	}
	while (b > 0)
	{
		c = '0' + (b % 10);
		write(1, &c, 1);
		b /= 10;
	}
}

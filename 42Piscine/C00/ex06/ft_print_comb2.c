/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:03:05 by anserran          #+#    #+#             */
/*   Updated: 2020/10/28 12:20:12 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_helper(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!((a == '9') && (b == '8') &&
		(c == '9') && (d == '9')))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char x[5];

	x[0] = '0' - 1;
	while (++x[0] <= '9')
	{
		x[1] = '0' - 1;
		while (++x[1] <= '9')
		{
			x[3] = '0' - 1;
			while (++x[3] <= '9')
			{
				x[4] = '0' - 1;
				while (++x[4] <= '9')
				{
					if ((x[0] <= x[3]) && (x[1] < x[4]))
					{
						ft_helper(x[0], x[1], x[3], x[4]);
					}
				}
			}
		}
	}
}
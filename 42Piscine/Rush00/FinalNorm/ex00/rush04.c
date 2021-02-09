/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:28:04 by apinto            #+#    #+#             */
/*   Updated: 2020/10/25 10:21:11 by apinto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int r;
	int c;

	r = 1;
	c = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((c == 1 && r == 1) ||
			(((c == x && c != 1) && (r == y && r != 1))))
				ft_putchar('A');
			else if ((c == 1 && r == y) || (c == x && r == 1))
				ft_putchar('C');
			else if ((r == 1 || r == y) || (c == 1 || c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		c = 1;
		r++;
		ft_putchar('\n');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:27:24 by anserran          #+#    #+#             */
/*   Updated: 2020/10/25 17:18:43 by apinto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while ((r < y) && (y > 0))
	{
		while ((c < x) && (x > 0))
		{
			if ((c == 0 && r == 0) || (c == 0 && r == y - 1)
				|| (c == x - 1 && r == y - 1) || (c == x - 1 && r == 0))
				ft_putchar('o');
			else if (r == 0 || r == y - 1)
				ft_putchar('-');
			else if (c == 0 || c == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		c = 0;
		r++;
		ft_putchar('\n');
	}
}

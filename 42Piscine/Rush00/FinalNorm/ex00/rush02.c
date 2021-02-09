/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:25:07 by apinto            #+#    #+#             */
/*   Updated: 2020/10/25 17:10:20 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while ((r < y) && (x > 0))
	{
		while ((c < x) && (y > 0))
		{
			if ((c == 0 && r == 0) || (c == x - 1 && r == 0))
				ft_putchar('A');
			else if ((c == 0 && r == y - 1) || (c == x - 1 && r == y - 1))
				ft_putchar('C');
			else if (r == 0 || r == y - 1)
				ft_putchar('B');
			else if (c == 0 || c == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		c = 0;
		r++;
		ft_putchar('\n');
	}
}

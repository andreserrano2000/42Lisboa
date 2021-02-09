/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:04:33 by anserran          #+#    #+#             */
/*   Updated: 2020/10/25 11:20:22 by evaz             ###   ########.fr       */
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
				ft_putchar('/');
			else if ((c == 1 && r == y) || (c == x && r == 1))
				ft_putchar('\\');
			else if ((r == 1 || r == y) || (c == 1 || c == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		c = 1;
		r++;
		ft_putchar('\n');
	}
}

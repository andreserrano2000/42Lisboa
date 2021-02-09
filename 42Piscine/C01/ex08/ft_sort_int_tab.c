/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:17:26 by anserran          #+#    #+#             */
/*   Updated: 2020/10/29 14:05:22 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int pos;
	int b;

	pos = 0;
	while (pos < size - 1)
	{
		if (tab[pos] > tab[pos + 1])
		{
			b = tab[pos];
			tab[pos] = tab[pos + 1];
			tab[pos + 1] = b;
			pos = 0;
		}
		else
			pos++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:45:39 by anserran          #+#    #+#             */
/*   Updated: 2020/11/07 12:29:14 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb)
{
	int a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a <= (nb / a))
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int a;

	a = 0;
	if (nb < 2)
		return (2);
	while (!ft_prime(nb + a))
	{
		a++;
	}
	return (nb + a);
}

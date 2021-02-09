/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:25:37 by anserran          #+#    #+#             */
/*   Updated: 2020/11/04 19:58:55 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i > 0 && argc > i)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

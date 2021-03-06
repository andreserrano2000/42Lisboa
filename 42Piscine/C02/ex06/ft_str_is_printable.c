/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:22:21 by anserran          #+#    #+#             */
/*   Updated: 2020/10/30 15:08:00 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < ' ')
			return (0);
		++a;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:50:57 by anserran          #+#    #+#             */
/*   Updated: 2020/10/30 13:27:02 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 'A' || str[a] > 'Z') && (str[a] < 'a' || str[a] > 'z'))
			return (0);
		++a;
	}
	return (1);
}

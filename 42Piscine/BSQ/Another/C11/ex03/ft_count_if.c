/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:07:46 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/21 11:07:51 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i++]))
			count++;
	}
	return (count);
}

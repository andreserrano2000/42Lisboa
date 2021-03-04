/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:17:25 by anserran          #+#    #+#             */
/*   Updated: 2020/11/01 11:36:28 by anserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int a;

	a = -1;
	while (str[++a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if ((str[a - 1] < 'a' || str[a - 1] > 'z') &&
					(str[a - 1] < 'A' || str[a - 1] > 'Z') &&
					(str[a - 1] < 48 || str[a - 1] > 57))
				str[a] -= 32;
			else if (str[a] >= 'A' && str[a] <= 'Z')
				str[a] += 32;
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
		{
			if ((str[a - 1] < 'a' || str[a - 1] > 'z') &&
					(str[a - 1] < 'A' || str[a - 1] > 'Z') &&
					(str[a - 1] < 48 || str[a - 1] > 57))
				str[a] = str[a];
			else if (str[a] >= 'A' && str[a] <= 'Z')
				str[a] += 32;
		}
	}
	return (str);
}
